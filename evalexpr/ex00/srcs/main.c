/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:01:31 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 23:39:04 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdio.h>
#include <stdlib.h>

int			count_brackets(char *expr)
{
	int count;

	count = 0;
	while (*expr)
	{
		if (*expr == '(')
			count++;
		expr++;
	}
	return (count);
}

int			words_count(char **words)
{
	int count;

	count = 0;
	while (*words != 0)
	{
		count++;
		words++;
	}
	return (count);
}

int			contains_bracket(char *elem)
{
	while (*elem)
	{
		if (*elem == '(' || *elem == ')')
			return (1);
		elem++;
	}
	return (0);
}

int			eval_expr(char *expr)
{
	char	**words;
	char	**nums_and_expr;
	int		end_brack;

	end_brack = 0;
	ft_split_expr(words, n_e, endbrack);
	return (0);
}

void		ft_split_expr(char **words, char **n_e, int end_brack)
{
	int		i;

	i = 0;
	words = ft_split_whitespaces(expr);
	n_e = malloc(sizeof(char*) * (count_brackets(expr) + words_count(words)));
	while (*words != 0)
	{
		end_brack = 0;
		if (contains_bracket(*words) == 1)
		{
			words[0][0] = (words[0][0] == '(') ? ' ' : words[0][0];
			if (words[0][0] == ' ')
				n_e[i++] = "(";
			else
			{
				words[0][ft_strlen(words[0]) - 1] = ' ';
				end_brack = 1;
			}
		}
		n_e[i++] = *words;
		if (end_brack == 1)
			n_e[i++] = ")";
		words++;
	}
	n_e[i] = 0;
}

int			main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
