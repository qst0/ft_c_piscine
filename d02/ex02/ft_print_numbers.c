/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:47:24 by myoung            #+#    #+#             */
/*   Updated: 2016/08/11 13:40:50 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	char number_to_print;

	number_to_print = '0';
	while (number_to_print <= '9')
		ft_putchar(number_to_print++);
}
