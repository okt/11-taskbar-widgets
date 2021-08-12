
;---------------------------------------

[measureInput2DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive2tempDriveLetterInput:X]
Y=[meterDrive2tempDriveLetterInput:Y]
H=[meterDrive2tempDriveLetterInput:H]
W=[meterDrive2tempDriveLetterInput:W]
DefaultValue=#2_DriveLetter#
Command1=!WriteKeyValue Variables 2_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk2SkinLoc#

[measureInput2DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive2tempInput:X]
Y=[meterDrive2tempInput:Y]
H=[meterDrive2tempInput:H]
W=[meterDrive2tempInput:W]
DefaultValue=#2_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 2_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk2SkinLoc#

[measureInput2DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive2tempSensorInstanceInput:X]
Y=[meterDrive2tempSensorInstanceInput:Y]
H=[meterDrive2tempSensorInstanceInput:H]
W=[meterDrive2tempSensorInstanceInput:W]
DefaultValue=#2_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 2_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk2SkinLoc#

[measureInput2DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive2tempSensorIDInput:X]
Y=[meterDrive2tempSensorIDInput:Y]
H=[meterDrive2tempSensorIDInput:H]
W=[meterDrive2tempSensorIDInput:W]
DefaultValue=#2_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 2_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk2SkinLoc#

;---------------------------------------

[meterDrive2templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk2
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive2tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#2_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput2DriveLetter" "ExecuteBatch 1-3"

[meter2DriveLabelColon]
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

[meter2DriveLabelTemp]
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


[meterSelect2tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor2tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 2_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor2tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor2tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk2SkinLoc#]

[meterSelect2tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor2tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 2_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor2tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor2tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk2SkinLoc#]


[meterDrive2tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#2_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput2DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive2tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#2_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput2DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive2tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#2_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput2DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
