/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:22:20 by myoung            #+#    #+#             */
/*   Updated: 2016/08/14 16:36:21 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		rush(int a, int b);
void		ft_putchar(char c);

int			main(void)
{
	rush(0, 3);
	rush(3, 0);
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(123, 42);
	return (0);
}
