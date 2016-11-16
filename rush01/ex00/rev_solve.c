/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:04:12 by myoung            #+#    #+#             */
/*   Updated: 2016/08/21 18:22:15 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			rev_solve(int **puzzle, int row, int col)
{
	int number_to_check;

	number_to_check = 9;
	if (puzzle[row][col] != 0 && (row < 9 && col < 9))
	{
		if ((col + 1) < 9)
			return (rev_solve(puzzle, row, col + 1));
		else if ((row + 1) < 9)
			return (rev_solve(puzzle, row + 1, 0));
		else
			return (1);
	}
	else
	{
		while (number_to_check > 0)
		{
			if (rev_try_guess(puzzle, row, col, number_to_check))
				return (1);
			number_to_check--;
		}
	}
	if (row < 9 && col < 9)
		return (0);
	return (1);
}

int			rev_try_guess(int **puzzle, int row, int col, int number_to_check)
{
	if (is_valid(puzzle, row, col, number_to_check))
	{
		puzzle[row][col] = number_to_check;
		if (rev_solve(puzzle, row, col))
			return (1);
		else
			puzzle[row][col] = 0;
	}
	return (0);
}
