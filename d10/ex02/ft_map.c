/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:23:18 by myoung            #+#    #+#             */
/*   Updated: 2016/08/22 20:14:06 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*returns;

	i = 0;
	returns = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		returns[i] = f(tab[i]);
		i++;
	}
	return (returns);
}
