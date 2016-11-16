/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 09:48:30 by myoung            #+#    #+#             */
/*   Updated: 2016/08/17 22:58:58 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			sort_arguments_by_ascii(int argc, char **argv);
char			*ft_strcpy(char *dst, char *src);
int				ft_strcmp(char *s1, char *s2);

int				main(int argc, char **argv)
{
	int		arg_to_print;

	arg_to_print = 1;
	if (argc < 2)
	{
		return (0);
		ft_putstr("displays the given arguments sorted by ascii order.\n");
		ft_putstr("usage:\t");
		ft_putstr(argv[0]);
		ft_putstr(" xyz 123 abc\n\t123\n\tabc\n\txyz\n");
	}
	sort_arguments_by_ascii(argc, argv);
	ft_putstr("ready to print:\n");
	while (arg_to_print < argc)
	{
		ft_putstr(argv[arg_to_print]);
		ft_putchar('\n');
		arg_to_print++;
	}
	return (0);
}

/*
** make a temp *char
** make a correct_positions int
** make a pos_to_check int
**
** correct_positions = 1, this is because the first arg is filename
** while correct positions is less than the argc
**  set pos_to_check as 1.
**
**  while pos_to_check < argc - 1
**   if the argv[pos_to_check] strcmp'd to argv[pos_to_check + 1] > 0
**    we have a miss placed item in our argv,
**    so lets swap them, like we did in ft_swap
**    use the temp *char we set earlier
**  pos_to_check++, since this one is good.
** we have a correct position, correct_positions++;
**
** We are done sorting when this is done.
*/

void			sort_arguments_by_ascii(int argc, char **argv)
{
	char	*temp;
	int		correct_positions;
	int		pos_to_check;

	correct_positions = 1;
	while (correct_positions < argc)
	{
		pos_to_check = 1;
		while (pos_to_check < argc - 1)
		{
			if (ft_strcmp(argv[pos_to_check], argv[pos_to_check + 1]) > 0)
			{
				temp = argv[pos_to_check];
				argv[pos_to_check] = argv[pos_to_check + 1];
				argv[pos_to_check + 1] = temp;
			}
			pos_to_check++;
		}
		correct_positions++;
	}
}

char			*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int				ft_strcmp(char *s1, char *s2)
{
	unsigned char	s1_value;
	unsigned char	s2_value;
	int				i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	s1_value = s1[i];
	s2_value = s2[i];
	return (s1_value - s2_value);
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
