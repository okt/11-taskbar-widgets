--
-- MinPrecision.lua v1.0 by TGonZo (from SilverAzide's FixedPrecisionFormat script)
--
-- This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.
--
-- This will auto scale a number and return a minimum number of digits as set by
-- the Precision variable.  This is SilverAzide's FixedPrecisionFormat script
-- that I have converted to a standard Measure update script.  In converting it
-- I was able to move several items to the initialization function that only need
-- to be executed once, and I also check the new value and only perform the work 
-- if it is different from before.  These couple of items should make this version
-- at least as efficient as prevously.  It's hard to say though, as both scripts
-- use so little cpu cycles. I just wanted a simple, standard update Measure 
-- version of this.
--
--
-- History:
--
--
-- Lua Script Options for MinPrecision.lua when used in a Measure.
--
--     InputValue
--
--       The value of the measure to be auto scaled and Precisioned.
--
--     Precision
--
--       Minimum number of digits to display
--
--     Factor
--
--       Auto Scale Factoring
--       0 = no auto scale
--       1 = divide by 1024
--       1k = divide by 1024, and make it a minimum of 1k
--       2 = divide by 1000
--       2k = divide by 1000, and make it a minimum of 1k
--
--
--
-- Example skin:
--
-- [Rainmeter]
-- Update=1000
-- AccurateText=1
-- 
-- [measureNetIn]
-- Measure=NetIn
-- 
-- [measureNetInBits]
-- Measure=Calc
-- Formula=measureNetIn * 8
-- 
-- [measureNetInBitsScaled]
-- Measure=Script
-- ScriptFile=#@#/MinPrecision.lua
-- InputValue=[measureNetInBits]
-- Precision=2
-- Factor=1
-- 
-- [MeterNetInBits]
-- Meter=String
-- MeasureName=measureNetInBitsScaled
-- X=10
-- Y=10
-- H=14
-- W=100
-- FontSize=10
-- FontColor=255,255,255,220
-- SolidColor=0,0,0,100
-- Padding=15,15,15,15
-- AntiAlias=1
-- PreFix="NetIn - "
-- Text=%1
-- PostFix=b
-- 
----------------------------------------------------------------------------------------------------
--

function Initialize()
  --
  -- this function is called when the script measure is initialized or reloaded
  --

  -- the -1 will force the update to process the first value.
  PrevValue = -1
  asSuffix = { " ", " k", " M", " G", " T", " P", " E", " Z", " Y" }
  PrevText = "0.0 "
  nDigitsAfterDecimal = 0
  nDigitsBeforeDecimal = 0
  sPattern = ""
  sText = ""
  nDivisor = 1024.0


  sPrecision = SELF:GetOption('Precision', '2')
  sFactor = SELF:GetOption('Factor', '1')


  -- validate Scale/Precision
  nPrecision = math.floor(tonumber(sPrecision)) or 3
  if nPrecision > 0 then
    -- OK
  else
    -- invalid input
    nPrecision = 3
  end

  -- validate Factor and set divisor if needed
  if sFactor == "1" or sFactor == "1k" then
    -- OK
  elseif sFactor == "2" or sFactor == "2k" then
    nDivisor = 1000.0
  else
    sFactor = "0"
    nDivisor = 1.0
  end


  return
end

--
-----------------------
--

function Update()

  nDivCount = 1

  sInputValue = SELF:GetOption('InputValue', '0')
  nInputValue = tonumber(sInputValue)

  -- if the Value has not changed, just return the previous Text.
  if nInputValue == PrevValue then
    return PrevText
  end
  PrevValue = nInputValue

  -- if minimum value is K, divide value by divisor.
  if sFactor == "1k" or sFactor == "2k" then
    nInputValue = nInputValue / nDivisor
    nDivCount = nDivCount + 1
  end

  while (math.abs(nInputValue) > nDivisor and nDivCount < 9 and nDivisor > 1.0) do
    nInputValue = nInputValue / nDivisor
    nDivCount = nDivCount + 1
  end

  nDigitsBeforeDecimal = math.max(1, math.floor(math.log10(math.abs(nInputValue))) + 1)
  nDigitsAfterDecimal = math.max(0, nPrecision - nDigitsBeforeDecimal)

  -- get formatting directive.
  sPattern = "%." .. nDigitsAfterDecimal .. "f"

  -- format the number.
  sText = string.format(sPattern, nInputValue)
  PrevText = sText  .. asSuffix[nDivCount]

  return PrevText

end

--
----------------------------------------------------------------------------------------------------
--
