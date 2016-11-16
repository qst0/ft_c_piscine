/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 14:52:27 by myoung            #+#    #+#             */
/*   Updated: 2016/08/21 16:50:09 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(int argc, char **argv)
{
	int **puzzle;
	int **puzzle2;

	if (argc != 10)
		ft_putstr("Error\n");
	if (argc != 10)
		return (0);
	puzzle = create_puzzle(argc, argv);
	puzzle2 = create_puzzle(argc, argv);
	if (puzzle == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (solve(puzzle, 0, 0))
	{
		rev_solve(puzzle2, 0, 0);
		if (solution_compare(puzzle, puzzle2) == 0)
			ft_putstr("Error\n");
		else
			print_puzzle(puzzle);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
