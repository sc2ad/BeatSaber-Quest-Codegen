& "$PSScriptRoot/build.ps1"

adb shell am force-stop com.beatgames.beatsaber

gci -rec -file -path libs -filter *.so  |
    % { adb push $_.FullName /sdcard/Android/data/com.beatgames.beatsaber/files/libs/ }
