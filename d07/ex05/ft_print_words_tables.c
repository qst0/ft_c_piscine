/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:24:02 by myoung            #+#    #+#             */
/*   Updated: 2016/08/18 16:17:14 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putstr(char *str);
int				ft_putchar(char c);

void			ft_print_words_tables(char **tab)
{
	while (*tab != 0)
	{
		ft_putstr(*tab);
		ft_putchar('\n');
		tab++;
	}
}

void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i++));
	}
}
