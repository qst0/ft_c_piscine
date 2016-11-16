/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:04:54 by myoung            #+#    #+#             */
/*   Updated: 2016/08/17 20:10:43 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);
void			ft_putstr(char *str);

int				main(int argc, char **argv)
{
	if (argc == -1)
	{
		return (0);
		ft_putstr("Warning: ");
		ft_putstr(argv[0]);
		ft_putstr(" does not need any arguments.\n");
	}
	ft_putstr(argv[0]);
	ft_putchar('\n');
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
