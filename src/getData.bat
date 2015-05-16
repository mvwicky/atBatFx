@echo off

echo "Getting Data from %1"
echo %1

set @url="gd2.mlb.com/components/game/mlb/year_%1"
echo %@url%

cd ../xml
mkdir %1
cd %1

wget %@url%

cd ../src