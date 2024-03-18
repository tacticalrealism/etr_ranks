@echo off

set /p armaFolder=Arma 3 location:

SET batchFolder=%~dp0
pushd %batchFolder%
cd ..
SET baseFolder=%cd%

echo %baseFolder%

REM Create z drive first
mkdir "%armaFolder%\z"

mklink /J "%armaFolder%\z\etr_ranks" "%baseFolder%\.hemttout\dev"
echo Done.

pause