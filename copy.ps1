Set-StrictMode -Version Latest
$ErrorActionPreference = "Ignore"
$PSDefaultParameterValues['*:ErrorAction']='Ignore'

C:\android\sdk\ndk\21.3.6528147\ndk-build -j6 NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk NDK_APPLICATION_MK=./Application.mk V=0

adb shell am force-stop com.beatgames.beatsaber

gci -rec -file -path libs -filter *.so  |
    % { adb push $_.FullName /sdcard/Android/data/com.beatgames.beatsaber/files/libs/ }
