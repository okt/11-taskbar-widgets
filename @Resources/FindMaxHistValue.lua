--
-- FindMaxHistValue.lua v1.2 by TGonZo
--
-- This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.
--
-- History:
-- v1.0 - 2015-06-08 - Initial release
-- v1.1 - 2015-06-08 - Made it more efficient, only scans values for a new max when needed.
--        Moved a couple of assignments to the initialize function that only need to be done on startup.
-- v1.2 - 2015-06-16 - Made it more efficient, it no longer recalculates the max unless needed.
--
-- This script will keep track of the values that are within the Histogram display and calculates
--  the Max Scale of the Histogram that is running in AutoScale mode.
-- I set this up to run like a regular Measure so you can point it at the very same Measure that the
--  Histogram is using, and you can use AutoScale and other options with it in a Meter.
-- It needs to update every time the Histogram does to collect the values anyway, so this seemed the simplest way.
-- It should work with a Line meter in autoscale mode as well.
-- An example below is there to help you understand how to use it.
--
-- Lua Script Options for FindMaxHistValue.lua when used in a Measure.
--
--     CurValue
--
--       The value of the measure that will be used in the Histogram.  The measure name.
--
--     HistWidth
--
--       The width of the Histogram meter.  (How many values to store and remember.)
--
--
--
-- Example skin:
--
-- [Rainmeter]
-- Update=1000
-- SolidColor=0,0,0,100
-- BackgroundMode=2
-- BackgroundMargins=0,0,10,10
--
-- [Variables]
-- HistogramWidth=80
--
-- [MeasureDiskReadBytes1]
-- Measure=Plugin
-- Plugin=PerfMon
-- PerfMonObject=LogicalDisk
-- PerfMonCounter=Disk Read Bytes/sec
-- PerfMonInstance=C:
--
-- [measureDiskReadBytesMaxHist]
-- Measure=Script
-- ScriptFile=#@#/FindMaxHistValue.lua
-- CurValue=[MeasureDiskReadBytes1]
-- HistWidth=#HistogramWidth#
--
-- [MeterReadBytesHistogram1]
-- Meter=Histogram
-- MeasureName=MeasureDiskReadBytes1
-- X=10
-- Y=10
-- W=#HistogramWidth#
-- H=30
-- PrimaryColor=100,150,250,220
-- SolidColor=0,0,0,100
-- AntiAlias=1
-- AutoScale=1
--
-- [MeterDiskReadBytesMaxHistText]
-- Meter=String
-- MeasureName=measureDiskReadBytesMaxHist
-- StringAlign=Left
-- FontSize=8
-- FontColor=255,255,255,220
-- X=0r
-- Y=0r
-- W=40
-- H=12
-- AutoScale=1
-- NumOfDecimals=0
-- Text=%1
--
--
----------------------------------------------------------------------------------------------------
--

function Initialize()
  --
  -- this function is called when the script measure is initialized or reloaded
  --

  -- initialize array and vars for Histogram values just once when the skin is loaded
  tValues = {}
  PrevMax = 0
  PrevMaxIndex = 0
  HistMaxPrev = 0

  sHistWidth = SELF:GetOption('HistWidth', '1')
  nHistWidth = tonumber(sHistWidth)

  return
end

--
-----------------------
--

function Update()

  -- initialize local vars, the Histogram max scale is always a minimum of 2.
  local CurMax = 2
  local HistMax = 2
  local CurSize = 0

  -- get parameters from the Measure the script is called from.
  sInputValue = SELF:GetOption('CurValue', '0')

  -- validate input parameters
  nValue = tonumber(sInputValue)

  -- add new value to the list.
  table.insert(tValues, 1, nValue)
  CurSize = table.maxn(tValues)

  -- trim off oldest Value as it falls off the Histogram view.
  if CurSize > nHistWidth then
    table.remove(tValues, nHistWidth+1)
  end
  PrevMaxIndex = PrevMaxIndex + 1


  -- if new value is the new max, no need to scan all values for a max.
  if nValue >= PrevMax then

    PrevMax = nValue
    PrevMaxIndex = 1

  -- when the old max ages out of the buffer, need to scan for a new max.
  elseif PrevMaxIndex > nHistWidth then

    -- find the Max Value in the current Histogram view.
    CurSize = table.maxn(tValues)
    if CurSize >= 1 then
      i = 1
      while i <= CurSize do
        if CurMax < tValues[i] then
          CurMax = tValues[i]
          PrevMaxIndex = i
        end
        i = i + 1
      end
    end
    PrevMax = CurMax

  else

    -- if no reason to rescan for a new max, return the previous max.
    return HistMaxPrev

  end


  -- find the current Histogram Max Scale based on the new max value.
  while PrevMax > HistMax do
    HistMax = HistMax * 2
  end
  HistMaxPrev = HistMax

  -- return a numeric value and not a string, so the autoscaler will work.
  return HistMax

end

--
----------------------------------------------------------------------------------------------------
--
