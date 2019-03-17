#
# we are now in "tools" folder. Go to project main folder: static-library
cd ..\
#

where.exe mingw32-g++ 2>&1 | Out-Null
If ($? -eq $False) {
    echo "Adding MinGW to PATH"
    $env:path="C:\Program Files (x86)\CodeBlocks\MinGW\bin;"+$env:path
}

where.exe cmake 2>&1 | Out-Null
If ($? -eq $False) {
    echo "Adding CMake to PATH"
    $env:path="C:\Program Files\CMake\bin;"+$env:path
}

## running CMake
mkdir -Force build 2>&1 | Out-Null
cmake -H".\" -Bbuild -G "MinGW Makefiles"

cd .\tools
