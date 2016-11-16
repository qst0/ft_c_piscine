/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:03:34 by myoung            #+#    #+#             */
/*   Updated: 2016/08/12 23:09:27 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


#include "ex00/ft_print_alphabet.c"
#include "ex01/ft_print_reverse_alphabet.c"
#include "ex02/ft_print_numbers.c"
#include "ex03/ft_is_negative.c"
#include "ex04/ft_print_comb.c"
#include "ex05/ft_print_comb2.c"
#include "ex06/ft_putnbr.c"
#include "ex07/ft_print_combn.c"

int		main()
{
	write(1,"ex00\n", 5);
	ft_print_alphabet();
	write(1,"\nex01\n", 6);
	ft_print_reverse_alphabet();
	write(1,"\nex02\n", 6);
	ft_print_numbers();
	write(1,"\nex03 PNP\n", 10);
	int i;
	ft_is_negative(0);
	ft_is_negative(-1);
	ft_is_negative(i);
	write(1,"\nex04\n", 6);
	ft_print_comb();
	write(1,"\nex05\n", 6);
	ft_print_comb2();
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	write(1, "brute force 7", 13);
	ft_putchar('\n');
//	ft_print_combn();

	return (0);
}

