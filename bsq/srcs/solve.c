/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 12:04:30 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:15:58 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

#define TRY_TOUCH_OBST 2
#define TRY_TOUCH_SIDE 3
#define TRY_TOUCH_BOTTOM 4

int		ts_result(t_grid g, int bx, int by, int size)
{
	if (size - 1 > g_big_sz)
	{
		g_big_idx = GET_IDX(g, bx, by);
		g_big_sz = size - 1;
	}
	if (by + size == g.height)
		return (TRY_TOUCH_BOTTOM);
	if (bx + size == g.width)
		return (TRY_TOUCH_SIDE);
	return (0);
}

int		try_square(t_grid g, int bx, int by)
{
	int size;
	int obst;
	int x;
	int y;

	size = g_big_sz + 1;
	while (by + size < g.height && bx + size < g.width)
	{
		obst = 0;
		y = by - 1;
		while (!obst && ++y <= by + size)
		{
			x = bx - 1;
			while (!obst && ++x <= bx + size)
				if (GET(g, x, y) & FLAG_OBST)
					obst = 1;
		}
		if (obst)
			break ;
		size++;
	}
	return (ts_result(g, bx, by, size));
}

void	solve_grid(t_grid grid)
{
	int x;
	int y;
	int xmax;
	int ymax;
	int tryret;

	y = 0;
	xmax = grid.width;
	ymax = grid.height;
	while (y < ymax)
	{
		x = 0;
		while (x < xmax)
		{
			tryret = try_square(grid, x, y);
			if (tryret == TRY_TOUCH_BOTTOM)
				ymax = y;
			if (tryret == TRY_TOUCH_BOTTOM || tryret == TRY_TOUCH_SIDE)
				xmax = x;
			x++;
		}
		y++;
	}
}
