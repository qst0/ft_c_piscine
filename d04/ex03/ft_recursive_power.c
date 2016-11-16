/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:25:50 by myoung            #+#    #+#             */
/*   Updated: 2016/08/13 18:06:33 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_power(int nb, int power)
{
	int result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
