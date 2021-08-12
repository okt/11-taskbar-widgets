
;---------------------------------------

[measureInput6DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive6tempDriveLetterInput:X]
Y=[meterDrive6tempDriveLetterInput:Y]
H=[meterDrive6tempDriveLetterInput:H]
W=[meterDrive6tempDriveLetterInput:W]
DefaultValue=#6_DriveLetter#
Command1=!WriteKeyValue Variables 6_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk6SkinLoc#

[measureInput6DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive6tempInput:X]
Y=[meterDrive6tempInput:Y]
H=[meterDrive6tempInput:H]
W=[meterDrive6tempInput:W]
DefaultValue=#6_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 6_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk6SkinLoc#

[measureInput6DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive6tempSensorInstanceInput:X]
Y=[meterDrive6tempSensorInstanceInput:Y]
H=[meterDrive6tempSensorInstanceInput:H]
W=[meterDrive6tempSensorInstanceInput:W]
DefaultValue=#6_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 6_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk6SkinLoc#

[measureInput6DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive6tempSensorIDInput:X]
Y=[meterDrive6tempSensorIDInput:Y]
H=[meterDrive6tempSensorIDInput:H]
W=[meterDrive6tempSensorIDInput:W]
DefaultValue=#6_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 6_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk6SkinLoc#

;---------------------------------------

[meterDrive6templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk6
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive6tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#6_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput6DriveLetter" "ExecuteBatch 1-3"

[meter6DriveLabelColon]
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

[meter6DriveLabelTemp]
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


[meterSelect6tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor6tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 6_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor6tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor6tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk6SkinLoc#]

[meterSelect6tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor6tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 6_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor6tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor6tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk6SkinLoc#]


[meterDrive6tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#6_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput6DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive6tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#6_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput6DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive6tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#6_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput6DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
