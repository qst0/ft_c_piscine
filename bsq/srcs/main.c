/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 10:03:17 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:47:59 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <ft.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		bsq_fd(int fd)
{
	t_grid	grid;
	char	*input;
	char	dict[3];

	g_big_idx = -1;
	g_big_sz = -1;
	input = ft_read_input(fd);
	grid = parse_grid(input, dict);
	free(input);
	if (grid.c == 0)
		return (EXIT_FAILURE);
	solve_grid(grid);
	print_grid(grid, dict);
	free(grid.c);
	ft_buf_putchar_flush();
	return (0);
}

int		all_files(int argc, char **argv)
{
	int i;
	int anyerr;
	int fd;
	int tmp;

	i = 1;
	anyerr = 0;
	while (i < argc)
	{
		fd = open(argv[i++], O_RDONLY);
		if (fd < 0)
		{
			anyerr = 1;
			write(1, "map error\n", 10);
			continue ;
		}
		tmp = bsq_fd(fd);
		anyerr |= tmp;
		if (tmp)
			write(1, "map error\n", 10);
		if (i < argc)
			write(1, "\n", 1);
	}
	return (anyerr);
}

int		main(int argc, char **argv)
{
	int		tmp;

	if (argc == 1)
	{
		tmp = bsq_fd(0);
		if (tmp)
			write(1, "map error\n", 10);
		return (tmp);
	}
	else
		return (all_files(argc, argv));
}
