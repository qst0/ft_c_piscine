where_i_am=$(ifconfig | grep inet | grep broadcast | cut -d ' ' -f 2)
echo $where_i_am

if [ $where_i_am = '' ]
then
	echo "Je suis perdu!"
fi
