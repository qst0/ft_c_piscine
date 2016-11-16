/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:38:42 by myoung            #+#    #+#             */
/*   Updated: 2016/08/19 14:39:02 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** We are being passed an array of arrays of chars
** we need to itterate through them and free up everything
** we will need two iterators, i and j.
** so while we still have arrays in our top array
**  we need to loop through the inner arrays
**  while we still have things in them
**   free up this current array
**   move to the next one: j++
**  free this inner array of arrays
**  move to the next one: i++;
**  start over at the begining, j = 0;
** we have free'd up all the inner data
** so free the top array
*/

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		j = 0;
		i++;
	}
	free(factory);
}
