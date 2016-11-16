/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 15:45:09 by myoung            #+#    #+#             */
/*   Updated: 2016/08/11 16:31:42 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	char digits[2];

	while (!(digits[1] == 99 && digits[0] == 98))
	{
		digits[1]++;
		if (digits[1] > 99)
		{
			digits[0]++;
			digits[1] = 0;
		}
		if (digits[0] < digits[1])
		{
			ft_putchar(digits[0] / 10 + '0');
			ft_putchar(digits[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(digits[1] / 10 + '0');
			ft_putchar(digits[1] % 10 + '0');
			if (!(digits[1] == 99 && digits[0] == 98))
				ft_putchar(',');
			if (!(digits[1] == 99 && digits[0] == 98))
				ft_putchar(' ');
		}
	}
}
