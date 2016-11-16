/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:04:56 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 14:15:11 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct	s_testcase {
	char		*s1;
}				t_testcase;

char			*ft_strupcase(char *s1);

t_testcase		g_testcases[] = {
	{"by"},
	{"bb"},
	{"qwertyuiopasdfghjklzxcvbnm"},
	{"éèâ, î or ôñü or ïç"},
	{"by"},
	{"short long string"},
	{"short LONG string"},
	{"short"},
	{"The rain in Spain"},
	{"The rain in sPain"},
	{"I̶͔̭̜n̦͉̭͔vok̛in͖͍͎̖g͈̪ ̬̙̭̮̬ṭ͚́h͔e̖ ͜f̺̮͉̭è̠̱e͔͓ļ̤̖i̠͇̬̪̳n͕͚̘̝g ̫̠̗͚͔̲o̜̮̣ͅf̸̭̗̫̞͉̝ ̼̩̻̹̱̜c̦̰̻̣̭͡ḥ̣̙̺͇̬a̮̞͇ͅo̦̰s̞̤͢.̧̩̤͕"},
};

int				main(void)
{
	int		i;
	char	*result;
	char	buf[500];

	i = 0;
	while (i < (int)(sizeof(g_testcases) / sizeof(t_testcase)))
	{
		strcpy(buf, g_testcases[i].s1);
		result = ft_strupcase(buf);
		printf("toupper(%s)\n", g_testcases[i].s1);
		printf("You: %s\n", result);
		i++;
	}
	printf("\nMANUAL INSPECT\n");
	return (0);
}
