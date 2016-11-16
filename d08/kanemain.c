/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 13:34:15 by kyork             #+#    #+#             */
/*   Updated: 2016/08/20 21:06:35 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_testcase {
	char		*s;
	int			num_words;
}				t_testcase;

t_testcase		g_tests[] = {
	{"", 0},
	{"    \t\t\n \n  ", 0},
	{"Simple string with a few words in it", 8},
	{"  \n\n space at start and end \t", 5},
	{"spaces      tabs\t\tand\nlinebreaks\fnot_formfeed", 4},
};

char			**ft_split_whitespaces(char *str);

int				main(void)
{
	int		i;
	int		wc;
	char	**tab;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(t_testcase)))
	{
		printf("ft_split_whitespaces(\"%s\")\n", g_tests[i].s);
		tab = ft_split_whitespaces(g_tests[i].s);
		wc = 0;
		while (tab[wc])
		{
			if (*(tab[wc]) == 0)
				printf("FAIL: Empty string\n");
			printf("%d: %s\n", wc, tab[wc]);
			wc++;
		}
		wc = 0;
		while (tab[wc])
			free(tab[wc++]);
		free(tab);
		printf("wc: %d exp: %d\n", wc, g_tests[i].num_words);
		if (wc != g_tests[i].num_words)
			printf("FAIL\n");
		i++;
	}
}
