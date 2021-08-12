
;---------------------------------------

[measureInput8DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive8tempDriveLetterInput:X]
Y=[meterDrive8tempDriveLetterInput:Y]
H=[meterDrive8tempDriveLetterInput:H]
W=[meterDrive8tempDriveLetterInput:W]
DefaultValue=#8_DriveLetter#
Command1=!WriteKeyValue Variables 8_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk8SkinLoc#

[measureInput8DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive8tempInput:X]
Y=[meterDrive8tempInput:Y]
H=[meterDrive8tempInput:H]
W=[meterDrive8tempInput:W]
DefaultValue=#8_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 8_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk8SkinLoc#

[measureInput8DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive8tempSensorInstanceInput:X]
Y=[meterDrive8tempSensorInstanceInput:Y]
H=[meterDrive8tempSensorInstanceInput:H]
W=[meterDrive8tempSensorInstanceInput:W]
DefaultValue=#8_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 8_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk8SkinLoc#

[measureInput8DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive8tempSensorIDInput:X]
Y=[meterDrive8tempSensorIDInput:Y]
H=[meterDrive8tempSensorIDInput:H]
W=[meterDrive8tempSensorIDInput:W]
DefaultValue=#8_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 8_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk8SkinLoc#

;---------------------------------------

[meterDrive8templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk8
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive8tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#8_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput8DriveLetter" "ExecuteBatch 1-3"

[meter8DriveLabelColon]
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

[meter8DriveLabelTemp]
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


[meterSelect8tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor8tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 8_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor8tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor8tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk8SkinLoc#]

[meterSelect8tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor8tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 8_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor8tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor8tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk8SkinLoc#]


[meterDrive8tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#8_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput8DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive8tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#8_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput8DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive8tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#8_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput8DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
