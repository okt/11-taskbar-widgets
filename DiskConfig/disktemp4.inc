
;---------------------------------------

[measureInput4DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive4tempDriveLetterInput:X]
Y=[meterDrive4tempDriveLetterInput:Y]
H=[meterDrive4tempDriveLetterInput:H]
W=[meterDrive4tempDriveLetterInput:W]
DefaultValue=#4_DriveLetter#
Command1=!WriteKeyValue Variables 4_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk4SkinLoc#

[measureInput4DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive4tempInput:X]
Y=[meterDrive4tempInput:Y]
H=[meterDrive4tempInput:H]
W=[meterDrive4tempInput:W]
DefaultValue=#4_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 4_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk4SkinLoc#

[measureInput4DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive4tempSensorInstanceInput:X]
Y=[meterDrive4tempSensorInstanceInput:Y]
H=[meterDrive4tempSensorInstanceInput:H]
W=[meterDrive4tempSensorInstanceInput:W]
DefaultValue=#4_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 4_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk4SkinLoc#

[measureInput4DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive4tempSensorIDInput:X]
Y=[meterDrive4tempSensorIDInput:Y]
H=[meterDrive4tempSensorIDInput:H]
W=[meterDrive4tempSensorIDInput:W]
DefaultValue=#4_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 4_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk4SkinLoc#

;---------------------------------------

[meterDrive4templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk4
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive4tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#4_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput4DriveLetter" "ExecuteBatch 1-3"

[meter4DriveLabelColon]
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

[meter4DriveLabelTemp]
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


[meterSelect4tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor4tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 4_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor4tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor4tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk4SkinLoc#]

[meterSelect4tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor4tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 4_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor4tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor4tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk4SkinLoc#]


[meterDrive4tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#4_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput4DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive4tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#4_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput4DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive4tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#4_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput4DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
