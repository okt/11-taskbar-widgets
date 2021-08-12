
;---------------------------------------

[measureInput7DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive7tempDriveLetterInput:X]
Y=[meterDrive7tempDriveLetterInput:Y]
H=[meterDrive7tempDriveLetterInput:H]
W=[meterDrive7tempDriveLetterInput:W]
DefaultValue=#7_DriveLetter#
Command1=!WriteKeyValue Variables 7_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk7SkinLoc#

[measureInput7DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive7tempInput:X]
Y=[meterDrive7tempInput:Y]
H=[meterDrive7tempInput:H]
W=[meterDrive7tempInput:W]
DefaultValue=#7_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 7_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk7SkinLoc#

[measureInput7DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive7tempSensorInstanceInput:X]
Y=[meterDrive7tempSensorInstanceInput:Y]
H=[meterDrive7tempSensorInstanceInput:H]
W=[meterDrive7tempSensorInstanceInput:W]
DefaultValue=#7_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 7_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk7SkinLoc#

[measureInput7DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive7tempSensorIDInput:X]
Y=[meterDrive7tempSensorIDInput:Y]
H=[meterDrive7tempSensorIDInput:H]
W=[meterDrive7tempSensorIDInput:W]
DefaultValue=#7_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 7_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk7SkinLoc#

;---------------------------------------

[meterDrive7templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk7
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive7tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#7_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput7DriveLetter" "ExecuteBatch 1-3"

[meter7DriveLabelColon]
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

[meter7DriveLabelTemp]
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


[meterSelect7tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor7tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 7_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor7tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor7tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk7SkinLoc#]

[meterSelect7tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor7tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 7_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor7tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor7tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk7SkinLoc#]


[meterDrive7tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#7_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput7DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive7tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#7_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput7DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive7tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#7_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput7DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
