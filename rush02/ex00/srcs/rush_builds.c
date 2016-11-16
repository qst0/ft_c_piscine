/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushbuilds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 20:51:00 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 21:40:57 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush.h>

void		rush04(int width, int height)
{
	char	part[4];
	int		type;

	if (width > 0 && height > 0)
	{
		type = 2;
		part[0] = 'A';
		part[1] = 'C';
		part[2] = 'B';
		part[3] = 'B';
		rush_solver(width, height, type, part);
	}
}

void		rush03(int width, int height)
{
	char	part[4];
	int		type;

	if (width > 0 && height > 0)
	{
		type = 0;
		part[0] = 'A';
		part[1] = 'C';
		part[2] = 'B';
		part[3] = 'B';
		rush_solver(width, height, type, part);
	}
}

void		rush02(int width, int height)
{
	char	part[4];
	int		type;

	if (width > 0 && height > 0)
	{
		type = 1;
		part[0] = 'A';
		part[1] = 'C';
		part[2] = 'B';
		part[3] = 'B';
		rush_solver(width, height, type, part);
	}
}

void		rush01(int width, int height)
{
	char	part[4];
	int		type;

	if (width > 0 && height > 0)
	{
		type = 2;
		part[0] = '/';
		part[1] = '\\';
		part[2] = '*';
		part[3] = '*';
		rush_solver(width, height, type, part);
	}
}

void		rush00(int width, int height)
{
	char	part[4];
	int		type;

	if (width > 0 && height > 0)
	{
		type = 3;
		part[0] = 'o';
		part[1] = 'o';
		part[2] = '-';
		part[3] = '|';
		rush_solver(width, height, type, part);
	}
}
