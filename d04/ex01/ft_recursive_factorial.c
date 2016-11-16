/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 11:29:51 by myoung            #+#    #+#             */
/*   Updated: 2016/08/13 12:09:07 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	int answer;

	if (nb == 0)
		return (1);
	if (nb >= 13)
		return (0);
	if (nb <= 1)
		return (1);
	answer = nb * ft_recursive_factorial(nb - 1);
	return (answer);
}
