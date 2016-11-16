/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:04:56 by kyork             #+#    #+#             */
/*   Updated: 2016/08/15 15:15:55 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct {
	char*	s1;
}			t_testcase;

char		*ft_strlowcase(char *s1);

t_testcase	g_testcases[] = {
	{"BY"},
	{"BB"},
	{"QWERTYUIOPASDFGHJKLZXCVBNM"},
	{"ÉÈÂ, Î OR ÔÑÜ OR ÏÇ"},
	{"BY"},
	{"SHORT long STRING"},
	{"SHORT LONG STRING"},
	{"SHORT"},
	{"THE RAIN IN spain"},
	{"THE RAIN IN SPAIN"},
};

int			main(void)
{
	int		i;
	char	*result;
	char	buf[100];

	i = 0;
	while (i < (int)(sizeof(g_testcases) / sizeof(t_testcase)))
	{
		strcpy(buf, g_testcases[i].s1);
		result = ft_strlowcase(buf);
		printf("tolower(%s)\n", g_testcases[i].s1);
		printf("You: %s\n", result);
		i++;
	}
	printf("\nMANUAL INSPECT\n");
	return (0);
}
