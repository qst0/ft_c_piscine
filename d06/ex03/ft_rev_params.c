/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:48:30 by myoung            #+#    #+#             */
/*   Updated: 2016/08/17 16:33:12 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);
void			ft_putstr(char *str);

int				main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
		ft_putstr("prints out the given arguments in reverse order.\n");
		ft_putstr("usage:\t");
		ft_putstr(argv[0]);
		ft_putstr(" test1 test2 test3\n\ttest3\n\ttest2\n\ttest1\n");
	}
	while (argc > 1)
	{
		ft_putstr(argv[--argc]);
		ft_putchar('\n');
	}
	return (0);
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
