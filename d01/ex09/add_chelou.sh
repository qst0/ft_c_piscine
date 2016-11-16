FT_NBR1_TEMP="$(echo $FT_NBR1 | tr \''\\\"\?\!' '01234')"
FT_NBR2_TEMP="$(echo $FT_NBR2 | tr 'mrdoc' '01234')"
RESULT=$(echo "obase=13;ibase=5;$FT_NBR1_TEMP+$FT_NBR2_TEMP" | bc)
echo $RESULT | tr '0123456789ABC' 'gtaio luSnemf'
