/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:04:56 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 12:22:39 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

char	*g_testcases[][2] = {
	{"", ""},
	{"aaaaaaa", ""},
	{"", "aaaaaaa"},
	{"b", "b"},
	{"b", "a"},
	{"b", "c"},
	{"é", "É"},
	{"é", "e"},
	{"e", "é"},
	{"e", "\254"},
	{"long string", "short"},
	{"short", "long string"},
	{"The rain in Spain", "The rain in sPain"},
};

int		main(void)
{
	int i;
	int result;
	int stdlib;

	i = 0;
	while (i < (int)(sizeof(g_testcases) / sizeof(char*[2])))
	{
		stdlib = strcmp(g_testcases[i][0], g_testcases[i][1]);
		result = ft_strcmp(g_testcases[i][0], g_testcases[i][1]);
		printf("strcmp(%s, %s)\n", g_testcases[i][0], g_testcases[i][1]);
		printf("Lib: %d\nYou: %d\n", stdlib, result);
		if (stdlib != result)
			printf("FAIL\n");
		i++;
	}
	return (0);
}
