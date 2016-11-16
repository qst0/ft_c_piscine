/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 09:45:24 by myoung            #+#    #+#             */
/*   Updated: 2016/08/23 12:21:19 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int			ft_sub(int nbr1, int nbr2, int *no_print)
{
	*no_print = 0;
	return (nbr1 - nbr2);
}

int			ft_add(int nbr1, int nbr2, int *no_print)
{
	*no_print = 0;
	return (nbr1 + nbr2);
}

int			ft_mul(int nbr1, int nbr2, int *no_print)
{
	*no_print = 0;
	return (nbr1 * nbr2);
}

int			ft_div(int nbr1, int nbr2, int *no_print)
{
	*no_print = ((nbr2 == 0) ? 1 : 0);
	return (nbr2 == 0 ? 0 : nbr1 / nbr2);
}

int			ft_mod(int nbr1, int nbr2, int *no_print)
{
	*no_print = ((nbr2 == 0) ? 1 : 0);
	return (nbr2 == 0 ? 0 : nbr1 % nbr2);
}
