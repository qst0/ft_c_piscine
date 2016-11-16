FT_NBR1=\'\?\"\"\'\\
FT_NBR2=rcrdmoddd

export FT_NBR1 FT_NBR2
result=$(./add_chelou.sh)

echo Expected:  tfla i
echo Result:    $result

# give exit code
[ "$result" == "tfla i" ]
exit $?
