
#norminette -R CheckForbiddenSourceHeader | tee /tmp/norm_output

gcc *.c -o bin -Wall -Wextra -Werror && ./bin && rm bin

COMPILE_STATUS=$?
! grep -v 'Norme:' < /tmp/norm_output > /dev/null
NORM_STATUS=$?
EXIT_STATUS=$(echo $COMPILE_STATUS + $NORM_STATUS | bc)

if [ $COMPILE_STATUS != 0 ]; then
	echo "FAIL: Compile / run failed"
fi
if [ $NORM_STATUS != 0 ]; then
	echo "FAIL: Norme"
fi

exit $EXIT_STATUS
