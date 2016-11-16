/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:32:15 by myoung            #+#    #+#             */
/*   Updated: 2016/08/18 22:17:38 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * size);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
