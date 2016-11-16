/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:21:40 by kyork             #+#    #+#             */
/*   Updated: 2016/08/15 15:18:16 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char		g_putchar[1000];
int			g_putchar_idx = 0;

/*
** Recording version of ft_putchar
*/

int			ft_putchar(char c)
{
	g_putchar[g_putchar_idx++] = c;
	write(1, &c, 1);
	return (0);
}

void		reset_putchar(void)
{
	memset(g_putchar, 0, 1000);
	g_putchar_idx = 0;
}

void		ft_putnbr(int nb);

typedef struct {
	int		i;
	char	*s;
}			t_testcase;

t_testcase	g_tests[] = {
	{42, "42"},
	{0, "0"},
	{-1, "-1"},
	{-2147483648, "-2147483648"},
	{-2147483647, "-2147483647"},
	{2147483647, "2147483647"},
	{1000000, "1000000"},
};

int			main(void)
{
	int i;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(t_testcase)))
	{
		reset_putchar();
		printf("You: ");
		fflush(0);
		ft_putnbr(g_tests[i].i);
		printf("\nLib: %d\n", g_tests[i].i);
		if (strcmp(g_tests[i].s, g_putchar))
			printf("FAIL\n");
		i++;
	}
}
