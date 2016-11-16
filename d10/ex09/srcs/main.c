/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:30:05 by myoung            #+#    #+#             */
/*   Updated: 2016/08/23 23:13:42 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <ft_opp.h>

int			main(int argc, char **argv)
{
	int *no_print;
	int no_print_val;
	int	result;

	if (argc != 4)
		return (0);
	no_print_val = 0;
	no_print = &no_print_val;
	result = ft_do_op(argv[1], argv[2], argv[3], no_print);
	if (*no_print == 1)
		ft_putstr("Stop : division by zero");
	else if (*no_print == 2)
		ft_putstr("Stop : modulo by zero");
	else if (*no_print == 0)
		ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}

int			ft_usage(int nbr1, int nbr2, int *no_print)
{
	int i;

	i = 0;
	nbr1 = 0;
	nbr2 = 0;
	*no_print = 3;
	ft_putstr("error : only [ ");
	while (i < (int)(sizeof(g_opptab) / sizeof(t_opp)))
	{
		if (g_opptab[i].func == &ft_usage)
		{
			i++;
			continue ;
		}
		ft_putstr(g_opptab[i].op);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("] are accepted");
	return (0);
}

int			ft_do_op(char *nbr1, char *op, char *nbr2, int *no_print)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (i < (int)(sizeof(g_opptab) / sizeof(t_opp)))
	{
		if (ft_strcmp(g_opptab[i].op, op) == 0)
		{
			return (g_opptab[i].func(ft_atoi(nbr1), ft_atoi(nbr2), no_print));
		}
		i++;
	}
	return (ft_usage(ft_atoi(nbr1), ft_atoi(nbr2), no_print));
}
