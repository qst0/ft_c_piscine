/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:40:48 by myoung            #+#    #+#             */
/*   Updated: 2016/08/27 22:37:10 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '
#define BRACKET(x) x == '(' || x == ')'

#include <ft.h>
#include <stdlib.h>

char			**ft_split_whitespaces(char *str)
{
	int		word_count;
	int		words_entered;
	int		i;
	char	**words;
	char	*word;

	i = 0;
	words_entered = 0;
	word_count = ft_word_count(str);
	words = (char**)malloc(sizeof(char*) * (word_count + 1));
	while (words_entered < word_count)
	{
		word = (char*)malloc(sizeof(char) * (ft_word_size(str) + 1));
		while (WHITESPACE(str[0]) && str[0] != '\0')
			str++;
		while (!(WHITESPACE(str[0])) && str[0] != '\0')
			word[i++] = *str++;
		word[i] = '\0';
		words[words_entered++] = word;
		i = 0;
	}
	words[word_count] = 0;
	return (words);
}

int				ft_word_count(char *str)
{
	int word_count;
	int i;
	int has_word;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		has_word = 0;
		while (WHITESPACE(str[i]) && str[i] != '\0')
			i++;
		while (!(WHITESPACE(str[i])) && str[i] != '\0')
		{
			has_word = 1;
			i++;
		}
		while (WHITESPACE(str[i]) && str[i] != '\0')
			i++;
		if (has_word == 1)
			word_count++;
	}
	return (word_count);
}

int				ft_word_size(char *str)
{
	int i;

	i = 0;
	while (WHITESPACE(str[i]) && str[i] != '\0')
		str++;
	while (!(WHITESPACE(str[i])) && str[i] != '\0')
		i++;
	return (i);
}
