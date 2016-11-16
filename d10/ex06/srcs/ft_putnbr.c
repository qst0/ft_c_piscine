/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:46:39 by myoung            #+#    #+#             */
/*   Updated: 2016/08/23 21:40:43 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

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

void	ft_putnbr(int nb)
{
	int length;

	if (nb < 0)
		ft_putchar('-');
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb += 2000000000;
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
