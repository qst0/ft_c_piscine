/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:11:25 by myoung            #+#    #+#             */
/*   Updated: 2016/08/23 23:12:10 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

t_opp g_opptab[] =
{
	{"-", &ft_sub},
	{"+", &ft_add},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"", &ft_usage}
};

void		ft_putchar(char c);
void		ft_putnbr(int nbr);
void		ft_putstr(char *str);
int			ft_strcmp(char *str1, char *str2);
int			ft_atoi(char *str);
int			ft_sub(int nbr1, int nbr2, int *no_print);
int			ft_add(int nbr1, int nbr2, int *no_print);
int			ft_mul(int nbr1, int nbr2, int *no_print);
int			ft_div(int nbr1, int nbr2, int *no_print);
int			ft_mod(int nbr1, int nbr2, int *no_print);
int			ft_usage(int nbr1, int nbr2, int *no_print);
int			ft_do_op(char *nbr1, char *op, char *nbr2, int *no_print);

#endif
