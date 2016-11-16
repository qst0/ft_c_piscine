/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 21:31:23 by myoung            #+#    #+#             */
/*   Updated: 2016/08/11 13:35:25 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int place[3];

	while (place[0] < 8)
	{
		place[1] = place[0] + 1;
		while (place[1] < 9)
		{
			place[2] = place[1] + 1;
			while (place[2] <= 9)
			{
				ft_putchar(place[0] + 48);
				ft_putchar(place[1] + 48);
				ft_putchar(place[2] + 48);
				if (place[0] + place[1] + place[2] != 24)
					ft_putchar(',');
				if (place[0] + place[1] + place[2] != 24)
					ft_putchar(' ');
				place[2]++;
			}
			place[1]++;
		}
		place[0]++;
	}
}
