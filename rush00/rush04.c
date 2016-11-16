/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:52:48 by myoung            #+#    #+#             */
/*   Updated: 2016/08/14 16:31:03 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		rush_printline(int width, char start, char ending, char fill);
void		rush_solver(int w, int h, int type, char part[]);
void		rush_printfirstline(int w, int type, char part[]);
void		rush_printlastline(int w, int type, char part[]);
void		ft_putchar(char c);

void		rush(int width, int height)
{
	char	part[4];
	int		type;

	if (width > 0 || height > 0)
	{
		type = 2;
		part[0] = 'A';
		part[1] = 'C';
		part[2] = 'B';
		part[3] = 'B';
		rush_solver(width, height, type, part);
	}
}

/*
** Rush Solver - Solves Rush00 Problems
**
** takes in the width and height of the rectangle
** takes in the type of rectangle character construction
**
** type 0 = First and Last line start/end with the start/end part
** type 1 = First line starts and ends with the start part
** 			Last line starts and ends with the end part
** type 2 = First line starts/ends with the start/end part
** 			Last line starts/ends with the end/start part
** type 3 = The start and end part are the same on both lines
** 			The First and Last line have a Horizonal fill
** 			The mid lines have a vertical Fill
**
** part[] = This is a char array of parts to build with
** 			Part 0: Start Part
** 			Part 1: End Part
**			Part 2: Horizonal Fill
**			Part 3: Vertical Fill
*/

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
			ft_putchar(start);
		if (iteration == 1 && w != 1)
			ft_putchar(end);
		if (iteration != 1 && iteration != w)
			ft_putchar(fill);
		if (iteration == 1)
			ft_putchar('\n');
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
