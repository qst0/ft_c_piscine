/* Reviewed, but not changed -qst0 */

int			ft_is_prime(int nb)
{
	int test;
	int max;

	test = 23;
	max = nb / 19;
	if (nb <= 0 || nb == 1)
		return (0);
	if ((nb % 2 == 0 && nb != 2) || (nb % 11 == 0 && nb != 11))
		return (0);
	if ((nb % 3 == 0 && nb != 3) || (nb % 13 == 0 && nb != 13))
		return (0);
	if ((nb % 5 == 0 && nb != 5) || (nb % 17 == 0 && nb != 17))
		return (0);
	if ((nb % 7 == 0 && nb != 7) || (nb % 19 == 0 && nb != 19))
		return (0);
	while (test < max)
	{
		if (nb % test == 0)
			return (0);
		test += 2;
	}
	return (1);
}
