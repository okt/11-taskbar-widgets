
[Rainmeter]
Update=1000
BackgroundMode=2
SolidColor=#BackgroundColor#

[Metadata]
Name=GlobalSettings
Author=okt
Information=Global default values for all meters.
License=Creative Commons BY-NC-SA 3.0
Version=2.3.0


;-----------------------------
; 40 px charts
; 8 px margin [4 top, 4 bottom]
;-----------------------------

[Variables]
colorRed=204,36,29,220
colorRedDim=204,36,29,140
; colorRedDim=245,50,50,140
colorPurple=220,80,220,220
colorBlue=108,182,255,220
colorBlueDim=108,182,255,140
colorBlueCpu=108,182,255,30
; colorBlueDim=100,150,250,140
colorBlueSolid=69,133,136,255
colorBlueLite=180,220,255,220
colorGreen=142,192,124,220
colorGreenDim=87,171,90,140
colorWhiteDim=235,219,178,220
colorWhiteLit=255,255,255,170
colorWhite=255,255,255,170
colorWhiteDimLow=168,153,132,220
colorWhiteDimMin=255,255,255,50
colorYellow=218,170,63,220
colorYellowLiteHi=255,255,180,220
colorYellowLite=255,225,115,220
colorYellowLiteLow=255,200,50,220
colorCyan=55,255,255,220
colorCyanDim=88,123,114,220
colorClear=0,0,0,0
colorBlack=0,0,0,220
colorGray=29,32,33,100
;;;;;;colors = R,G,B,translucent
colorCore0=#colorWhite#
colorCore1=#colorBlueLite#
colorCore2=#colorWhite#
colorCore3=#colorBlueLite#
colorCore4=#colorWhite#
colorCore5=#colorBlueLite#
colorCore6=#colorWhite#
colorCore7=#colorBlueLite#
colorCore8=#colorWhite#
colorCore9=#colorBlueLite#
colorCore10=#colorWhite#
colorCore11=#colorBlueLite#

fontName=Segoe UI
ClockFontName=JuliaMono
textSizeMd=12
textSize=8

All-in-OneSkinLoc=SimplePerfMeters\All-in-One
NetSkinLoc=SimplePerfMeters\Network
NetConfigSkinLoc=SimplePerfMeters\Network\config
WxSkinLoc=SimplePerfMeters\Wx
WxConfigSkinLoc=SimplePerfMeters\wx\config
CPUmemSkinLoc=SimplePerfMeters\CPUmem
PerfConfigSkinLoc=SimplePerfMeters\perfconfig
VolumeSkinLoc=SimplePerfMeters\Volume
DiskConfigSkinLoc=SimplePerfMeters\DiskConfig
;GPUSkinLoc=SimplePerfMeters\GPU
;GPUConfigSkinLoc=SimplePerfMeters\GPU\config

BackgroundColor=29,32,33,255


meterScaleClock=1.0
meterScaleCPU=1.0
meterScaleNet=1.0
meterScaleDisk=1.0
meterScaleWx=1.0
meterScaleVolume=1.0
meterScaleGPU=1.0
meterScaleAll-in-One=1.0

CPU0MhzMeasureName=measureCPU0MhzHWiNFO
CPU0colorMhzHWiNFOSelect=245,80,80,220
CPU0colorMhzPerfMonSelect=255,255,255,50
CPU0colorFanOffSelect=245,80,80,220
CPU0colorFanOnSelect=255,255,255,50
CPU0FanOnOffSelect=1

;GPUcolorFanRpmSelect=245,80,80,220
;GPUcolorFanPerSelect=255,255,255,50
;GPUfanMeasureName=HWiNFOGPU0FanRpm
;GPUfanUOM=rpm
;GPUmemTotalMeasureName=HWiNFOGPU0MemMax
;; HWiNFOGPU0MemMax or HWiNFOGPU0MemMaxAMD
;GPUmemUsedMeasureName=HWiNFOGPU0MemUsed
;; HWiNFOGPU0Mem or HWiNFOGPU0MemUsedAMD
;GPUcolorAMDmemSelect=255,255,255,50
;GPUcolorNVmemSelect=100,250,100,220


WxLocId=USDC0001
WxWebUpdateRate=300
WxSearchLoc=washington
WxUnitsBackMetric=0,0,0,0
WxUnitsBackStandard=255,255,255,50
WxUnits=
WxLocale=en_US

ClockSkinLoc=SimplePerfMeters\Clock
ClockConfigSkinLoc=SimplePerfMeters\Clock\config
ClockLabel=
Clock12or24hour=I
ClockBg12hr=255,255,255,50
ClockBg24hr=0,0,0,0
ClockLocale=Local
ClockDST=1
ClockColorDSTOnSelect=100,250,100,220
ClockColorDSTOffSelect=255,255,255,50
ClockTZ=Local

Clock2SkinLoc=SimplePerfMeters\Clock2
Clock2ConfigSkinLoc=SimplePerfMeters\Clock2\config
Clock2Label=GMT
Clock212or24hour=I
Clock2Bg12hr=255,255,255,50
Clock2Bg24hr=0,0,0,0
Clock2Locale=Local
Clock2DST=0
Clock2ColorDSTOnSelect=255,255,255,50
Clock2ColorDSTOffSelect=245,80,80,220
Clock2TZ=0

Clock3SkinLoc=SimplePerfMeters\Clock3
Clock3ConfigSkinLoc=SimplePerfMeters\Clock3\config
Clock3Label=GMT
Clock312or24hour=I
Clock3Bg12hr=255,255,255,50
Clock3Bg24hr=0,0,0,0
Clock3Locale=Local
Clock3DST=0
Clock3ColorDSTOnSelect=255,255,255,50
Clock3ColorDSTOffSelect=245,80,80,220
Clock3TZ=0

Clock4SkinLoc=SimplePerfMeters\Clock4
Clock4ConfigSkinLoc=SimplePerfMeters\Clock4\config
Clock4Label=GMT
Clock412or24hour=I
Clock4Bg12hr=255,255,255,50
Clock4Bg24hr=0,0,0,0
Clock4Locale=Local
Clock4DST=0
Clock4ColorDSTOnSelect=255,255,255,50
Clock4ColorDSTOffSelect=245,80,80,220
Clock4TZ=0

NetId=1
netInMeasureName=measureNetIn
netOutMeasureName=measureNetOut
netUOM=B
NetColorBits=0,0,0,0
NetColorBytes=255,255,255,50
NetHideExt=1
NetHideExtText=0
NetColorHideExt=255,255,255,50
NetColorShowExt=0,0,0,0


Disk1SkinLoc=SimplePerfMeters\DiskMeter1
Disk2SkinLoc=SimplePerfMeters\DiskMeter2
Disk3SkinLoc=SimplePerfMeters\DiskMeter3
Disk4SkinLoc=SimplePerfMeters\DiskMeter4
Disk5SkinLoc=SimplePerfMeters\DiskMeter5
Disk6SkinLoc=SimplePerfMeters\DiskMeter6
Disk7SkinLoc=SimplePerfMeters\DiskMeter7
Disk8SkinLoc=SimplePerfMeters\DiskMeter8

DiskColor1tempOffSelect=255,255,255,50
DiskColor1tempOnSelect=100,250,100,220
DiskColor2tempOffSelect=255,255,255,50
DiskColor2tempOnSelect=100,250,100,220
DiskColor3tempOffSelect=255,255,255,50
DiskColor3tempOnSelect=100,250,100,220
DiskColor4tempOffSelect=245,80,80,220
DiskColor4tempOnSelect=255,255,255,50
DiskColor5tempOffSelect=245,80,80,220
DiskColor5tempOnSelect=255,255,255,50
DiskColor6tempOffSelect=245,80,80,220
DiskColor6tempOnSelect=255,255,255,50
DiskColor7tempOffSelect=245,80,80,220
DiskColor7tempOnSelect=255,255,255,50
DiskColor8tempOffSelect=245,80,80,220
DiskColor8tempOnSelect=255,255,255,50

1_DriveTempOnOff=0
2_DriveTempOnOff=1
3_DriveTempOnOff=0
4_DriveTempOnOff=1
5_DriveTempOnOff=1
6_DriveTempOnOff=1
7_DriveTempOnOff=1
8_DriveTempOnOff=1

1_DriveLetter=C
2_DriveLetter=D
3_DriveLetter=E
4_DriveLetter=F
5_DriveLetter=G
6_DriveLetter=H
7_DriveLetter=I
8_DriveLetter=J



;-----------------------------
;-----------------------------

[styleLeftTextMed]
StringAlign=Left
;StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=#fontName#
FontSize=#textSizeMd#
AntiAlias=1
ClipString=1

[styleRightTextMed]
StringAlign=Right
;StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=#fontName#
FontSize=#textSizeMd#
AntiAlias=1
ClipString=1

[styleCenterTextMed]
StringAlign=Center
StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=#fontName#
FontSize=#textSizeMd#
AntiAlias=1
ClipString=1

;-------

[styleLeftText]
StringAlign=Left
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleLeftTextSmall]
StringAlign=Left
StringCase=None
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=Segoe UI
FontSize=7
AntiAlias=1
ClipString=1

;-------

[styleRightText]
StringAlign=Right
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleRightTextSmall]
StringAlign=Right
StringCase=None
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorWhiteDim#
FontFace=Segoe UI
FontSize=7
AntiAlias=1
ClipString=1

;-------

[styleBarYellow]
BarColor=#colorYellow#
BarOrientation=HORIZONTAL
SolidColor=#colorWhiteDimMin#

[styleBarRed]
BarColor=#colorRed#
BarOrientation=HORIZONTAL
SolidColor=#colorWhiteDimMin#

[styleBarBlue]
BarColor=#colorBlue#
BarOrientation=HORIZONTAL
SolidColor=#colorWhiteDimMin#

;-----------------------------
;-----------------------------

