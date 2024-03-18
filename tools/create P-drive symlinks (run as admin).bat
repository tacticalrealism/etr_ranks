@echo off

set /p pDrive=P-drive location:

SET batchFolder=%~dp0
pushd %batchFolder%
cd ..
SET baseFolder=%cd%

echo %baseFolder%

REM Create p drive first
mkdir "%pDrive%\z"

mklink /J "%pDrive%\z\etr_ranks" "%baseFolder%\.hemttout\dev"
echo done.

pause
