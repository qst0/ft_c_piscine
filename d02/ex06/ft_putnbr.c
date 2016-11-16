/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:46:39 by myoung            #+#    #+#             */
/*   Updated: 2016/08/11 18:22:51 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbr_length(int nb);
int		power_of(int nb, int expo);

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
	int i;
	int num;

	num = 1;
	i = 0;
	while (i < expo)
	{
		num *= nb;
		i++;
	}
	return (num);
}
