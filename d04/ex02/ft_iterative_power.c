/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:11:31 by myoung            #+#    #+#             */
/*   Updated: 2016/08/13 12:21:54 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
