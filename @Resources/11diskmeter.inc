[Rainmeter]
BackgroundMargins=0,0,0,0
Group=Disks|AllPerf
MouseOverAction=[!ShowMeter "meterOpenDiskConfigSkin"][!UpdateMeter "meterOpenDiskConfigSkin"][!Redraw]
MouseLeaveAction=[!HideMeter "meterOpenDiskConfigSkin"][!UpdateMeter "meterOpenDiskConfigSkin"][!Redraw]
OnRefreshAction=[!HideMeter "meterOpenDiskConfigSkin"][!UpdateMeter "meterOpenDiskConfigSkin"][!Redraw]

[Metadata]
Name=DiskMeter
Author=TGonZo
Information=Shows disk usage and activity.
License=Creative Commons BY-NC-SA 3.0
Version=2.1.0

[Variables]
@IncludeGlobal=#@#globalsettings.inc
@IncludeHWiNFO=#@#HWiNFO.inc
HistogramWidth=80
disk1=#disk1#


;------------------------------
;------------------------------

[measureTotalDisk]
Measure=FreeDiskSpace
Drive=#disk1#
Total=1
UpdateDivider=10
IgnoreRemovable=0

[measureUsedDisk]
Measure=FreeDiskSpace
Drive=#disk1#
InvertMeasure=1
UpdateDivider=10
IgnoreRemovable=0

[measureAvailDisk]
Measure=FreeDiskSpace
Drive=#disk1#
UpdateDivider=10
IgnoreRemovable=0

[measureAvailDiskScale]
Measure=Script
ScriptFile=#@#/MinPrecision.lua
InputValue=[measureAvailDisk]
Precision=2
Factor=2

[MeasureDiskReadBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#disk1#

[measureDiskReadBytesMaxHist]
Measure=Script
ScriptFile=#@#/FindMaxHistValue.lua
CurValue=[MeasureDiskReadBytes]
HistWidth=#HistogramWidth#

[MeasureDiskWriteBytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#disk1#

[measureDiskWriteBytesMaxHist]
Measure=Script
ScriptFile=#@#/FindMaxHistValue.lua
CurValue=[MeasureDiskWriteBytes]
HistWidth=#HistogramWidth#

;------------------------------
;------------------------------

[meterWidth]
Meter=Image
X=0
Y=0
W=(120 * #meterScaleDisk#)
H=0

[meterHeight]
Meter=Image
X=0
Y=0
W=0
H=(48 * #meterScaleDisk#)

;------------------

; [meterOpenDiskConfigSkin]
; Meter=String
; X=(([meterWidth:W] / #meterScaleDisk#) - 15) 
; Y=2
; H=12
; W=11
; SolidColor=#colorGray#
; FontColor=#colorWhiteDim#
; StringStyle=Bold
; FontSize=13
; AntiAlias=1
; Text=*
; UpdateDivider=-1
; TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#


[meterDriveLabel]
Meter=String
X=(#HistogramWidth# + 3)
Y=0
W=30
H=14
MeterStyle=styleLeftText
; Fontsize=10
; Fontcolor=#colorWhiteDim#
Text=#disk1#
AntiAlias=1
UpdateDivider=-1
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

[meterDriveSize]
Meter=String
MeasureName=measureTotalDisk
MeterStyle=styleLeftText
X=(#HistogramWidth# + 3)
Y=14
W=30
H=12
Autoscale=2
NumOfDecimals=0
Text=%1
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

[meterDriveUsed]
Meter=String
MeasureName=measureUsedDisk
MeterStyle=styleLeftText
X=(#HistogramWidth# + 3)
Y=28
W=30
H=12
Percentual=1
NumOfDecimals=0
Text=%1
Postfix=%
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

;------------------------------

[MeterReadBytesHistogram]
Meter=Histogram
MeasureName=MeasureDiskReadBytes
X=0
Y=0
W=#HistogramWidth#
H=18
PrimaryColor=#colorBlue#
SolidColor=0,0,0,0
AntiAlias=1
AutoScale=1
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#


[MeterDiskReadBytes]
Meter=String
MeasureName=MeasureDiskReadBytes
MeterStyle=styleLeftText
X=0
Y=0
W=80
H=12
AutoScale=1
NumOfDecimals=0
; Prefix="R "
Text=%1
Postfix=B
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

;-----------

[meterBarDiskUsed]
Meter=Bar
MeasureName=measureUsedDisk
MeterStyle=styleBarYellow
X=0
Y=18r
W=80
H=4
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

;-----------

[MeterWriteBytesHistogram]
Meter=Histogram
MeasureName=MeasureDiskWriteBytes
X=0r
Y=4r
W=#HistogramWidth#
H=18
PrimaryColor=#colorRed#
SolidColor=0,0,0,0
AntiAlias=1
AutoScale=1
Flip=1
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

[MeterDiskWriteBytes]
Meter=String
MeasureName=MeasureDiskWriteBytes
MeterStyle=styleLeftText
X=0r
Y=5r
W=80
H=12
AutoScale=1
NumOfDecimals=0
; Prefix="W "
Text=%1
Postfix=B
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#

;------------------------------

[HWiNFOMBDiskTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SMART-Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Temp-Entry#
HWiNFOType=CurrentValue
DynamicVariables=1
Disabled=#DriveTempOnOff#

[HWiNFOMBDiskTempUnits]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-SMART-Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Temp-Entry#
HWiNFOType=Units
DynamicVariables=1
Disabled=#DriveTempOnOff#


[meterDriveTemp]
Meter=String
MeasureName=HWiNFOMBDiskTemp
MeasureName2=HWiNFOMBDiskTempUnits
MeterStyle=styleRightText
X=(#HistogramWidth#)
Y=0
W=30
H=12
NumOfDecimals=0
Text=%1%2
TransformationMatrix=#meterScaleDisk#;0;0;#meterScaleDisk#;#meterScaleDisk#;#meterScaleDisk#
Hidden=#DriveTempOnOff#

;------------------------------
