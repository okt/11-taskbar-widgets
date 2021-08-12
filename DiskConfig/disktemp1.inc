;
; To add another line to the Disk Settings skin,
; make a copy of this file and,
; find/replace these to change all the items here for a new unique line
;
; 1_      9_
; 1temp   9temp
; 1Drive  9Drive
; 1Skin   9Skin
; disk1   disk9
;
;---------------------------------------

[measureInput1DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive1tempDriveLetterInput:X]
Y=[meterDrive1tempDriveLetterInput:Y]
H=[meterDrive1tempDriveLetterInput:H]
W=[meterDrive1tempDriveLetterInput:W]
DefaultValue=#1_DriveLetter#
Command1=!WriteKeyValue Variables 1_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk1SkinLoc#

[measureInput1DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive1tempInput:X]
Y=[meterDrive1tempInput:Y]
H=[meterDrive1tempInput:H]
W=[meterDrive1tempInput:W]
DefaultValue=#1_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 1_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk1SkinLoc#

[measureInput1DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive1tempSensorInstanceInput:X]
Y=[meterDrive1tempSensorInstanceInput:Y]
H=[meterDrive1tempSensorInstanceInput:H]
W=[meterDrive1tempSensorInstanceInput:W]
DefaultValue=#1_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 1_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk1SkinLoc#

[measureInput1DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive1tempSensorIDInput:X]
Y=[meterDrive1tempSensorIDInput:Y]
H=[meterDrive1tempSensorIDInput:H]
W=[meterDrive1tempSensorIDInput:W]
DefaultValue=#1_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 1_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk1SkinLoc#

;---------------------------------------

[meterDrive1templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk1
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive1tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#1_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput1DriveLetter" "ExecuteBatch 1-3"

[meter1DriveLabelColon]
Meter=String
X=20r
Y=0r
H=20
W=10
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
Text=:
;SolidColor=0,0,0,100
UpdateDivider=-1

[meter1DriveLabelTemp]
Meter=String
X=92
Y=0r
H=20
W=50
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=Temp
;SolidColor=0,0,0,100
UpdateDivider=-1


[meterSelect1tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor1tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 1_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor1tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor1tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk1SkinLoc#]

[meterSelect1tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor1tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 1_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor1tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor1tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk1SkinLoc#]


[meterDrive1tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#1_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput1DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive1tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#1_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput1DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive1tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#1_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput1DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
