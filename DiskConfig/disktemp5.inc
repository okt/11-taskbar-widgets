
;---------------------------------------

[measureInput5DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive5tempDriveLetterInput:X]
Y=[meterDrive5tempDriveLetterInput:Y]
H=[meterDrive5tempDriveLetterInput:H]
W=[meterDrive5tempDriveLetterInput:W]
DefaultValue=#5_DriveLetter#
Command1=!WriteKeyValue Variables 5_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk5SkinLoc#

[measureInput5DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive5tempInput:X]
Y=[meterDrive5tempInput:Y]
H=[meterDrive5tempInput:H]
W=[meterDrive5tempInput:W]
DefaultValue=#5_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 5_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk5SkinLoc#

[measureInput5DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive5tempSensorInstanceInput:X]
Y=[meterDrive5tempSensorInstanceInput:Y]
H=[meterDrive5tempSensorInstanceInput:H]
W=[meterDrive5tempSensorInstanceInput:W]
DefaultValue=#5_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 5_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk5SkinLoc#

[measureInput5DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive5tempSensorIDInput:X]
Y=[meterDrive5tempSensorIDInput:Y]
H=[meterDrive5tempSensorIDInput:H]
W=[meterDrive5tempSensorIDInput:W]
DefaultValue=#5_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 5_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk5SkinLoc#

;---------------------------------------

[meterDrive5templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk5
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive5tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#5_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput5DriveLetter" "ExecuteBatch 1-3"

[meter5DriveLabelColon]
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

[meter5DriveLabelTemp]
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


[meterSelect5tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor5tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 5_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor5tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor5tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk5SkinLoc#]

[meterSelect5tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor5tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 5_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor5tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor5tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk5SkinLoc#]


[meterDrive5tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#5_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput5DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive5tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#5_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput5DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive5tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#5_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput5DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
