[MAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=(#FFTSize#*2)
FFTOverlap=#FFTSize#
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Sensitivity=#Sensitivity#
FreqMin=20
FreqMax=20000
Bands=21
DynamicVariables=1
Group=Spectrum

;---------------------------------------------
;---------------------------------------------

[MBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=1

[MBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=2

[MBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=3

[MBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=4

[MBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=5

[MBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=6

[MBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=7

[MBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=8

[MBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=9

[MBand10]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=10

[MBand11]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=11

[MBand12]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=12

[MBand13]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=13

[MBand14]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=14

[MBand15]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=15

[MBand16]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=16

[MBand17]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=17

[MBand18]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=18

[MBand19]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=19

[MBand20]
Measure=Plugin
Plugin=AudioLevel
Parent=MAudio
Type=Band
BandIdX=20