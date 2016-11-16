/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:21:40 by kyork             #+#    #+#             */
/*   Updated: 2016/08/15 15:17:03 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str);

char	*g_tests[] = {"", "Hello, world!\n",
	"Common accents are the acute (é), grave (è), circumflex (â, î or ô),"};
char	g_putchar[1000];
int		g_putchar_idx = 0;

/*
** Recording version of ft_putchar
*/

int		ft_putchar(char c)
{
	g_putchar[g_putchar_idx++] = c;
	write(1, &c, 1);
	return (0);
}

void	reset_putchar(void)
{
	memset(g_putchar, 0, 1000);
	g_putchar_idx = 0;
}

int		main(void)
{
	int i;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(char*)))
	{
		printf("You: ");
		fflush(0);
		reset_putchar();
		ft_putstr(g_tests[i]);
		printf("\nLib: %s\n", g_tests[i]);
		if (strcmp(g_putchar, g_tests[i]))
			printf("FAIL\n");
		i++;
	}
}
