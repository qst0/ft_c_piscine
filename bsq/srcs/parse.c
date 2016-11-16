/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 15:13:18 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:15:01 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

int		fill_grid(char *input, t_grid g, char dict[3])
{
	int		x;
	int		y;
	char	c;

	y = 0;
	while (y < g.height)
	{
		x = 0;
		while (x < g.width)
		{
			c = input[x + y * (g.width + 1)];
			if (c == dict[0] || c == dict[1])
				GET(g, x, y) = (c == dict[1]) ? FLAG_OBST : FLAG_OKAY;
			else
				return (1);
			x++;
		}
		if (input[x + y * (g.width + 1)] != '\n')
			return (1);
		y++;
	}
	if (input[0 + y * (g.width + 1)] != 0)
		return (1);
	return (0);
}

/*
** We can avoid halting on nulls when filling out the dict
** because ft_read_input always allocates at least 4096 bytes
** ("all 0s" is prevented by i++ < 24)
*/

t_grid	parse_grid(char *input, char dict[3])
{
	t_grid	g;
	char	*s;
	int		i;

	g.height = 0;
	i = 0;
	while ('0' <= *input && *input <= '9' && i++ < 24)
		g.height = g.height * 10 + (*input++ - '0');
	dict[0] = *input++;
	dict[1] = *input++;
	dict[2] = *input++;
	if (i >= 24 || *input++ != '\n')
		return ((t_grid){0, 0, 0, 0});
	s = input;
	while (*s && *s != '\n')
		s++;
	g.width = (s - input);
	g.w_8 = CEIL_8(g.width);
	g.c = malloc(g.w_8 * g.height);
	if (0 != fill_grid(input, g, dict))
	{
		free(g.c);
		g.c = 0;
	}
	return (g);
}
