/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:32:15 by myoung            #+#    #+#             */
/*   Updated: 2016/08/18 21:28:28 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		size;
	int		*range;
	int		i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	range = (int*)malloc(sizeof(int) * size);
	while (i < size)
		range[i++] = min++;
	return (range);
}
