/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 09:25:37 by myoung            #+#    #+#             */
/*   Updated: 2016/08/21 22:33:09 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Adapted from syb0rg's solution on:
** http://codereview.stackexchange.com/questions/37430/sudoku-solver-in-c
**
** A sudoku in our case is 9 x 9, with 81 cells, 9 rows, 9 cols.
** we also have 9 boxes-
** which is what we will be calling 3*3 cell blocks.
**
** let's start with 0 in our numbering system.
** so the top left cell, is [0][0]
** it is in the top left box, which is box 0.
**
** So, we call each box like so:
** 	0, 1, 2,
** 	3, 4, 5,
** 	6, 7, 8,
**
** So, we could name each cell like so:
**
** 		0   1   2    3   4   5    6   7   8
**
** 0	0 , 1 , 2 ,  3 , 4 , 5 ,  6 , 7 , 8 ,
** 1	9 , 10, 11,  12, 13, 14,  15, 16, 17,
** 2	18, 19, 20,  21, 22, 23,  24, 25, 26,
**
** 3	27, 28, 29,  30, 31, 32,  33, 34, 35,
** 4	36, 37, 38,  39, 40, 41,  42, 43, 44,
** 5	45, 46, 47,  48, 49, 50,  51, 52, 53,
**
** 6	54, 55, 56,  57, 58, 59,  60, 61, 62,
** 7	63, 64, 65,  66, 67, 68,  69, 70, 71,
** 8	72, 73, 74,  75, 76, 77,  78, 79, 80.
**
** We will be using a [row][col] notation.
** For example:
** 	cell 51 as marked above would be [5][6]
** 	it is in row 5,
**	it is in col 6,
**	it is in box 5,
**
** Each box has a starting point:
** For example:
** Box 0's top left corner starts in [0][0]
** Box 5's top left corner starts in [3][6]
** Box 8's top left corner starts in [6][6]
**
** When we check if a cell is_valid we need:
**	The **puzzle, the row, the column, the number we are checking
**
** We need to know where box that we need to check is,
** int row_box_start;
**  will be set to where to the top row in the box
** int col_box_start;
**  will be set to where to the furthest left column in the box
**
** So if we are checking: row[5]col[6], we are in the box 5.
**
** we need a row_box start of 3
** we need a col_box_start of 6
** here is a way to calculate that:
**  we are in row 5,
**   5 / 3 = 1, 1 * 3 = 3
**  we are in col 6,
**   6 / 3 = 2, 2 * 3 = 6
**  You can check that the cell at [3][6] AKA cell 33
**  is the top left corner of the box our cell [5][6] AKA cell 51 is.
**
** int i;
** will represent where we are currently checking
** when we start to loop
** it will start at 0
**
** So let's start looping:
** while we are still within the bounds of our puzzle:
**  i < 9;
**  we will loop till we find a match and thus fail and return FALSE aka 0;
**
**  we check the row going right each loop
**  0, 1, 2, 3, 4, 5, 6, 7, 8
**  we check the col going down each loop
**  0,
**  1,
**  2,
**  3,
**  4,
**  5,
**  6,
**  7,
**  8
**  we check the box from it's top left to it's bottom right.
**  0, 3, 6,
**  1, 4, 7,
**  2, 5, 8
**
**  if at any cell we check we get a match for our number
**   - that makes our guess invalid.
**  if we make it all the way through the loop
**  we have found a valid guess. Rejoice!
*/

int			is_valid(int **puzzle, int row, int col, int num)
{
	int row_box_start;
	int col_box_start;
	int i;

	row_box_start = (row / 3) * 3;
	col_box_start = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row_box_start + (i % 3)][col_box_start + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

/*
** try_guess
** params: puzzle, row, col, number_to_check
** Runs is_valid on our params
** if the guess was valid
** 		use it. Set the current cell, puzzle[row][col] = to number_to_check
** 		if we can succesful run solve
** 			return 1, our success case
** 		otherwise, reset this cell to 0: puzzle[row][col] = 0;
** if we make it to the end of this function, our guess was wrong, return 0;
*/

int			try_guess(int **puzzle, int row, int col, int number_to_check)
{
	if (is_valid(puzzle, row, col, number_to_check))
	{
		puzzle[row][col] = number_to_check;
		if (solve(puzzle, row, col))
			return (1);
		else
			puzzle[row][col] = 0;
	}
	return (0);
}

/*
** solve
** params: puzzle, row, col
** we need a number_to_check
** set that to 1 for this forward checking solve function
** if the current cell isn't a zero- it has an answer
** make sure it is also in the bounds of the puzzle board
** 		if the next column over isn't out of bounds
** 			return the result of solve, but with the next column over
** 		if the next row over isn't out of bounds
** 			return the result of solve, but with the next row down
** 		else
** 			we have solved this puzzle- since we are at the last cell
** 			and we have a solution for it.
** 			return 1, our success case
** 	if the current cell is a zero
** 		run a loop while we still have numbers to check,
** 		starting with 1, end with 9.
** 			if we try our current guess, with try_guess
** 			and we get back a success aka 1
** 		otherwise, we made a bad guess, so try the next one:
** 		number_to_check++
**
** 	 if we are inside the puzzle bounds, row < 9 && col < 9
** 	 and we made it this far.
** 	 we need to back track- or this is an invalid puzzle.
** 	 return 0, our fail case.
** 	if we made it this far,
** 	we have a solved puzzle!
** 	return 1, our success case!
** 	Whoop whoop!
*/

int			solve(int **puzzle, int row, int col)
{
	int number_to_check;

	number_to_check = 1;
	if (puzzle[row][col] != 0 && (row < 9 && col < 9))
	{
		if ((col + 1) < 9)
			return (solve(puzzle, row, col + 1));
		else if ((row + 1) < 9)
			return (solve(puzzle, row + 1, 0));
		else
			return (1);
	}
	else
	{
		while (number_to_check < 10)
		{
			if (try_guess(puzzle, row, col, number_to_check))
				return (1);
			number_to_check++;
		}
	}
	if (row < 9 && col < 9)
		return (0);
	return (1);
}

/*
** int **create_puzzle
** params: int argc, char **argv
** we need two iterators, let them be i and j
** one is for our array of strings
** one is for the string's chars
** we need an int array array, aka pointer pointer
** let's call it puzzle
** start at i = 1, because we don't need the file name argv
** malloc enough space for 9 arrays in our puzzle
** start a loop
** while i is less than 10, since we need to place data in 9 arrays
** 		malloc enough space in the current array[i -1]
** 		(this is because we need i to skip the file name)
** 		(but we also need this in the i'th position)
** 		for 9 ints
** 		set j = 0;
** 		start an inner loop
** 		while j < 9 (this is to insert an int in each spot in our array)
** 			if the value at argv[i][j] is not a '.'
** 			and argv[i][j] is a number char
** 				set the puzzle postion [i - 1][j] to the int value of the char
** 			else if the value at argv[i][j] is a '.'
** 				set the puzzle position [i - 1][j] to 0
** 			otherwise
** 				return (0), a null int**
** 				(this should be checked in the case of invalid input)
** 			j++;
** 		i++;
** 	if we make it to the end of our loops, out puzzle has been made
** 	return our newly made int **puzzle, return(puzzle);
*/

int			**create_puzzle(int argc, char **argv)
{
	int i;
	int j;
	int **puzzle;

	i = 1;
	puzzle = (int**)(malloc((sizeof(int*) * argc - 1)));
	while (i < 10)
	{
		puzzle[i - 1] = (int*)(malloc((sizeof(int) * 9)));
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.' && (argv[i][j] >= '0' && argv[i][j] <= '9'))
				puzzle[i - 1][j] = (argv[i][j] - '0');
			else if (argv[i][j] == '.')
				puzzle[i - 1][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (puzzle);
}

void		print_puzzle(int **puzzle)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (j != 8)
			{
				ft_putnbr(puzzle[i][j]);
				ft_putchar(' ');
			}
			else
			{
				ft_putnbr(puzzle[i][j]);
				ft_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
