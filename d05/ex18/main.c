/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:08:48 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 12:46:02 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

char			*g_testary[] = {
	"The rain in", " Spain", " ", "falls mainly on", "",
	" the plain", "\nFAIL", "FAIL"};

void			test_short_src(void)
{
	char	buf[100];
	char	stdlibbuf[100];
	int		result;
	int		stdlib;

	memset(buf, 0, 100);
	memset(stdlibbuf, 0, 100);
	result = ft_strlcat(buf, "short---------", 4);
	stdlib = strlcat(stdlibbuf, "short---------", 4);
	if (result != stdlib)
		printf("FAIL %d: %d != %d\n", __LINE__, result, stdlib);
	if (strcmp(buf, stdlibbuf))
		printf("FAIL %d:\nYou: %s\nLib: %s\n", __LINE__, buf, stdlibbuf);
	printf("You: %s\nLib: %s\n", buf, stdlibbuf);
}

void			test_full_buf(void)
{
	char	buf[100];
	char	stdlibbuf[100];
	int		result;
	int		stdlib;

	memset(buf, 'X', 100);
	memset(stdlibbuf, 'X', 100);
	buf[40] = 0;
	stdlibbuf[40] = 0;
	result = ft_strlcat(buf, "short---------", 39);
	stdlib = strlcat(stdlibbuf, "short---------", 39);
	if (result != stdlib)
		printf("FAIL %d: %d != %d\n", __LINE__, result, stdlib);
	if (strcmp(buf, stdlibbuf))
		printf("FAIL %d:\nYou: %s\nLib: %s\n", __LINE__, buf, stdlibbuf);
	printf("You: %s\nLib: %s\n", buf, stdlibbuf);
}

int				main(void)
{
	char	buf[100];
	char	stdlibbuf[100];
	int		i;
	int		result;
	int		stdlib;

	memset(buf, 0, 100);
	memset(stdlibbuf, 0, 100);
	i = 0;
	while (i < (int)(sizeof(g_testary) / sizeof(char*)))
	{
		result = ft_strlcat(buf, g_testary[i], 45);
		stdlib = strlcat(stdlibbuf, g_testary[i], 45);
		if (result != stdlib)
			printf("FAIL %d: %d != %d\n", i, result, stdlib);
		if (strcmp(buf, stdlibbuf))
			printf("FAIL %d:\nYou: %s\nLib: %s\n", i, buf, stdlibbuf);
		i++;
	}
	printf("You: %s\nLib: %s\n", buf, stdlibbuf);
	test_short_src();
	test_full_buf();
}
