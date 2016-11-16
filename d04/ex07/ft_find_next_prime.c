/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:34:21 by myoung            #+#    #+#             */
/*   Updated: 2016/08/13 22:34:38 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_find_next_prime(int nb)
{
	int test;
	int max;

	test = 23;
	max = nb / 19;
	if (nb <= 0 || nb == 1)
	{
		return (2);
	}
	if ((nb % 2 == 0 && nb != 2) || (nb % 11 == 0 && nb != 11))
		return (ft_find_next_prime(nb + 1));
	if ((nb % 3 == 0 && nb != 3) || (nb % 13 == 0 && nb != 13))
		return (ft_find_next_prime(nb + 1));
	if ((nb % 5 == 0 && nb != 5) || (nb % 17 == 0 && nb != 17))
		return (ft_find_next_prime(nb + 1));
	if ((nb % 7 == 0 && nb != 7) || (nb % 19 == 0 && nb != 19))
		return (ft_find_next_prime(nb + 1));
	while (test < max)
	{
		if (nb % test == 0)
			return (ft_find_next_prime(nb + 1));
		test += 2;
	}
	return (nb);
}
