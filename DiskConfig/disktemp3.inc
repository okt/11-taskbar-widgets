
;---------------------------------------

[measureInput3DriveLetter]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive3tempDriveLetterInput:X]
Y=[meterDrive3tempDriveLetterInput:Y]
H=[meterDrive3tempDriveLetterInput:H]
W=[meterDrive3tempDriveLetterInput:W]
DefaultValue=#3_DriveLetter#
Command1=!WriteKeyValue Variables 3_DriveLetter "$UserInput$" "#@#globalsettings.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk3SkinLoc#

[measureInput3DriveTempEntry]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive3tempInput:X]
Y=[meterDrive3tempInput:Y]
H=[meterDrive3tempInput:H]
W=[meterDrive3tempInput:W]
DefaultValue=#3_HWiNFO-SMART-Temp-Entry#
Command1=!WriteKeyValue Variables 3_HWiNFO-SMART-Temp-Entry "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk3SkinLoc#

[measureInput3DriveTempSensorInstance]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive3tempSensorInstanceInput:X]
Y=[meterDrive3tempSensorInstanceInput:Y]
H=[meterDrive3tempSensorInstanceInput:H]
W=[meterDrive3tempSensorInstanceInput:W]
DefaultValue=#3_HWiNFO-SMART-Temp-SensorInstance#
Command1=!WriteKeyValue Variables 3_HWiNFO-SMART-Temp-SensorInstance "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk3SkinLoc#

[measureInput3DriveTempSensorID]
Measure=Plugin
Plugin=InputText
SolidColor=#colorBlueSolid#
FontColor=#colorWhite#
FontFace=Seqoe UI
FontSize=12
X=[meterDrive3tempSensorIDInput:X]
Y=[meterDrive3tempSensorIDInput:Y]
H=[meterDrive3tempSensorIDInput:H]
W=[meterDrive3tempSensorIDInput:W]
DefaultValue=#3_HWiNFO-SMART-Temp-SensorId#
Command1=!WriteKeyValue Variables 3_HWiNFO-SMART-Temp-SensorId "$UserInput$" "#@#HWiNFO.inc"
Command2=!Refresh #CURRENTCONFIG#
Command3=!Refresh #Disk3SkinLoc#

;---------------------------------------

[meterDrive3templabel]
Meter=String
X=10
Y=21r
H=20
W=45
FontSize=12
FontColor=#colorBlueLite#
AntiAlias=1
Text=disk3
;SolidColor=0,0,0,100
UpdateDivider=-1

[meterDrive3tempDriveLetterInput]
Meter=String
X=45r
Y=0r
H=19
W=20
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#3_DriveLetter#
LeftMouseUpAction=!CommandMeasure "measureInput3DriveLetter" "ExecuteBatch 1-3"

[meter3DriveLabelColon]
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

[meter3DriveLabelTemp]
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


[meterSelect3tempOn]
Meter=Image
X=140
Y=0r
W=14
H=14
SolidColor=#DiskColor3tempOnSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 3_DriveTempOnOff "0" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor3tempOnSelect #colorGreen# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor3tempOffSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk3SkinLoc#]

[meterSelect3tempOff]
Meter=Image
X=20r
Y=0r
W=14
H=14
SolidColor=#DiskColor3tempOffSelect#
LeftMouseUpAction=[!WriteKeyValue Variables 3_DriveTempOnOff "1" "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor3tempOffSelect #colorRed# "#@#globalsettings.inc"][!WriteKeyValue Variables DiskColor3tempOnSelect #colorWhiteDimMin# "#@#globalsettings.inc"][!Refresh #CURRENTCONFIG#][!Refresh #Disk3SkinLoc#]


[meterDrive3tempInput]
Meter=String
X=#InputX#
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#3_HWiNFO-SMART-Temp-Entry#
LeftMouseUpAction=!CommandMeasure "measureInput3DriveTempEntry" "ExecuteBatch 1-3"

[meterDrive3tempSensorInstanceInput]
Meter=String
X=122r
Y=0r
H=19
W=50
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#3_HWiNFO-SMART-Temp-SensorInstance#
LeftMouseUpAction=!CommandMeasure "measureInput3DriveTempSensorInstance" "ExecuteBatch 1-3"

[meterDrive3tempSensorIDInput]
Meter=String
X=52r
Y=0r
H=19
W=120
FontSize=12
FontColor=#colorWhite#
AntiAlias=1
SolidColor=#colorWhiteDimMin#
Text=#3_HWiNFO-SMART-Temp-SensorId#
LeftMouseUpAction=!CommandMeasure "measureInput3DriveTempSensorID" "ExecuteBatch 1-3"

;---------------------------------------
