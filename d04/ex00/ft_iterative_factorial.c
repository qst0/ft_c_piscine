/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 09:08:12 by myoung            #+#    #+#             */
/*   Updated: 2016/08/13 11:07:04 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int answer;

	answer = nb;
	if (nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		answer = answer * (nb - 1);
		nb--;
	}
	return (answer);
}
