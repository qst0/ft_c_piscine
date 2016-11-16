/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 12:22:57 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 21:25:23 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*g_strparts[] = {"The quick brown fox", "jumps over the lazy dog",
	"", ".\n"};

int		main(void)
{
	char	buf[100];
	char	stdbuf[100];
	char	*result;
	char	*stdret;
	int		i;

	memset(buf, 'A', 100);
	memset(stdbuf, 'A', 100);
	buf[99] = 0;
	stdbuf[99] = 0;
	buf[0] = 0;
	stdbuf[0] = 0;
	i = 0;
	while (i < (int)(sizeof(g_strparts) / sizeof(char*)))
	{
		result = ft_strcat(buf, g_strparts[i]);
		stdret = strcat(stdbuf, g_strparts[i]);
		if (strcmp(result, stdret))
			printf("FAIL %d %d\n", __LINE__, i);
		if (memcmp(buf, stdbuf, 100))
			printf("FAIL %d %d\n", __LINE__, i);
		i++;
	}
	printf("You: %s\nLib: %s\n", buf, stdbuf);
}
