/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 14:16:01 by myoung            #+#    #+#             */
/*   Updated: 2016/08/21 18:21:01 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putstr(char *str);
int			**create_puzzle(int argc, char **argv);
void		print_puzzle(int **puzzle);
int			is_valid(int **puzzle, int row, int col, int num);
int			rev_solve(int **puzzle, int row, int col);
int			rev_try_guess(int **puzzle, int row, int col, int number_to_check);
int			solution_compare(int **sol1, int **sol2);
int			solve(int **puzzle, int row, int col);
int			try_guess(int **puzzle, int row, int col, int number_to_check);

#endif
