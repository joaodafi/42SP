#!/bin/sh

X=$(echo $FT_NBR1 | tr "'\\\\\"?\!" "01234") Y=$(echo $FT_NBR2 | tr "mrdoc" "01234") Z=$(echo "obase=13; ibase=5; ($X+$Y)" | bc) W=$(echo $Z | tr "0123456789ABC" "gtaio luSnemf") 

echo $W
echo $X
echo $Y
echo $Z