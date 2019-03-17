#
# current folder: static-library\tools
#

where.exe mingw32-make 2>&1 | Out-Null
If ($? -eq $False) {
  $env:path="C:\Program Files (x86)\CodeBlocks\MinGW\bin;"+$env:path
}

# test again
where.exe mingw32-make 2>&1 | Out-Null
If ($? -eq $False) {
  echo "MinGW not included in System PATH! Please check the environment"
  exit 1
}

cd ..\build

echo "-----------------------------------------"
echo "|    Clean objects and binaries         |"
echo "-----------------------------------------"

mingw32-make clean

echo "-----------------------------------------"
echo "|    Build source code                  |"
echo "-----------------------------------------"

mingw32-make

echo "-----------------------------------------"
echo "|    INSTALL binaries and libs          |"
echo "-----------------------------------------"

mingw32-make install


echo ""; echo ""

