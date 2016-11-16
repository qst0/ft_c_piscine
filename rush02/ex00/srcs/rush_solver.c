/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:52:48 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 21:38:53 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush.h>

void		rush_solver(int w, int h, int type, char part[])
{
	int		i;
	char	start;
	char	end;
	char	hfill;
	char	vfill;

	i = 1;
	start = part[0];
	hfill = part[2];
	vfill = part[3];
	end = part[1];
	while (i <= h)
	{
		if (i == 1)
			rush_printfirstline(w, type, part);
		if (i == h && h != 1)
			rush_printlastline(w, type, part);
		if (i != 1 && i != h)
			rush_printline(w, vfill, vfill, ' ');
		i++;
	}
}

void		rush_printfirstline(int w, int type, char part[])
{
	if (type == 0)
		rush_printline(w, part[0], part[1], part[2]);
	if (type == 1 || type == 3)
		rush_printline(w, part[0], part[0], part[2]);
	if (type == 2)
		rush_printline(w, part[0], part[1], part[2]);
}

void		rush_printline(int w, char start, char end, char fill)
{
	int		iteration;

	iteration = w;
	while (iteration > 0)
	{
		if (iteration == w)
			ft_putchar_build(start);
		if (iteration == 1 && w != 1)
			ft_putchar_build(end);
		if (iteration != 1 && iteration != w)
			ft_putchar_build(fill);
		if (iteration == 1)
			ft_putchar_build('\n');
		iteration--;
	}
}

void		rush_printlastline(int w, int type, char part[])
{
	if (type == 0)
		rush_printline(w, part[0], part[1], part[2]);
	if (type == 1 || type == 3)
		rush_printline(w, part[1], part[1], part[2]);
	if (type == 2)
		rush_printline(w, part[1], part[0], part[2]);
}
