/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:54:21 by myoung            #+#    #+#             */
/*   Updated: 2016/08/12 23:02:21 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_ultimate_div_mod(int *a, int *b)
{
	int numerator;
	int denominator;

	numerator = *a;
	denominator = *b;
	*a = numerator / denominator;
	*b = numerator % denominator;
}
