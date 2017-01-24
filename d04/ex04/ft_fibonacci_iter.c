int 	ft_fibonacci(int index)
{
	int current;
	int last;
	int next;
	int temp;

	last = 0;
	current = 1;
	next = 1;
	while (index--)
	{
		temp = next;
		next += current;
		last = current;
		current = temp;
	}
	return (current);
}
