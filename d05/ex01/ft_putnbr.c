/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:46:39 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 22:37:07 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbr_length(int nb);
int		power_of(int nb, int expo);
int		ft_putchar(char c);

/*
** I did it this way:
** if the number is negative, putchar the '-'
**  since the INT_MIN is -2147483648
**  if we make that positive it will break the sign bit
**  so make a case for that:
**   we can print out the first '2' manually
**   then mod the number to get all the trailing 147483648
**  now we can make the number positive by multiplying by -1
**  get the length of our number
**  while the length is greater than 0
**   putchar the number / by 10 to the power of the length -1
**   to turn a char into a number, you can add the '0' char
**   or the '0' char value, 48.
**   take the number and % it by 10 to the power of length -1
**   take one off the length
*/

void	ft_putnbr(int nb)
{
	int length;

	if (nb < 0)
		ft_putchar('-');
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb %= 1000000000;
	}
	if (nb < 0)
		nb *= -1;
	length = nbr_length(nb);
	while (length > 0)
	{
		ft_putchar(nb / (power_of(10, (length - 1))) + '0');
		nb = nb % (power_of(10, (length - 1)));
		length--;
	}
}

int		nbr_length(int nb)
{
	if (nb / 1000000000 != 0)
		return (10);
	if (nb / 100000000 != 0)
		return (9);
	if (nb / 10000000 != 0)
		return (8);
	if (nb / 1000000 != 0)
		return (7);
	if (nb / 100000 != 0)
		return (6);
	if (nb / 10000 != 0)
		return (5);
	if (nb / 1000 != 0)
		return (4);
	if (nb / 100 != 0)
		return (3);
	if (nb / 10 != 0)
		return (2);
	return (1);
}

int		power_of(int nb, int expo)
{
	int result;

	if (expo == 0)
		return (1);
	if (expo < 0)
		return (0);
	if (expo == 1)
		return (nb);
	result = nb * power_of(nb, expo - 1);
	return (result);
}
