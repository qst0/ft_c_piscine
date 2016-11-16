/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 09:22:48 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:48:57 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>
#include <ft.h>

int		g_big_idx = -1;
int		g_big_sz = -1;

void	print_grid(t_grid g, char *dict)
{
	int row;
	int col;
	int bsq_col;
	int bsq_row;

	if (g.w_8 == 0)
		return ;
	if (g_big_idx == -1)
		g_big_idx = 0;
	bsq_col = g_big_idx % g.w_8;
	bsq_row = g_big_idx / g.w_8;
	row = -1;
	while (++row < g.height)
	{
		col = -1;
		while (++col < g.width)
		{
			if ((bsq_col <= col && col <= bsq_col + g_big_sz) &&
				(bsq_row <= row && row <= bsq_row + g_big_sz))
				ft_buf_putchar(dict[2]);
			else
				ft_buf_putchar(dict[g.c[col + row * g.w_8] & FLAG_OBST]);
		}
		ft_buf_putchar('\n');
	}
}
