/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:19:20 by myoung            #+#    #+#             */
/*   Updated: 2016/08/17 16:32:57 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);
void			ft_putstr(char *str);

int				main(int argc, char **argv)
{
	int arg_to_print;

	arg_to_print = 1;
	if (argc < 2)
	{
		return (0);
		ft_putstr("prints out the given arguments.\n");
		ft_putstr("usage:\t");
		ft_putstr(argv[0]);
		ft_putstr(" test1 test2 test3\n\ttest1\n\ttest2\n\ttest3\n");
	}
	while (arg_to_print < argc)
	{
		ft_putstr(argv[arg_to_print]);
		ft_putchar('\n');
		arg_to_print++;
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
