/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 16:24:30 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 13:38:05 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void			ft_putnbr_base(int nbr, char *base);

char			g_putchar[1000];
int				g_putchar_idx;
int				g_putchar_off;

int				ft_putchar(char c)
{
	g_putchar[g_putchar_idx++] = c;
	if (!g_putchar_off)
		write(1, &c, 1);
	return (0);
}

void			reset_putchar(void)
{
	g_putchar_idx = 0;
	memset(g_putchar, 0, 1000);
}

typedef struct	{
	int			i;
	char		*base;
	char		*out;
}				t_testcase;

t_testcase		g_tests[] = {
	{42, "", ""},
	{42, "X", ""},
	{-42, "X", ""},
	{42, "0123456789", "42"},
	{6 * 9, "0123456789abc", "42"},
	{10, "oi", "ioio"},
	{21, "012", "210"},
	{16, "0123456789ABCDEF", "10"},
	{-2147483648, "0123456789", "-2147483648"},
	{2147483647, "0123456789", "2147483647"},
	{2147483647, "0123456789ABCDEF", "7FFFFFFF"},
	{-2147483648, "0123456789ABCDEF", "-80000000"},
	{-2147483648, "0123456789abcdefghijklmnopqrstuv", "-2000000"},
/*
** hashtag throwback wednesday
*/
	{1482, "gtaio luSnemf", "Seg"},
	{57067429, "gtaio luSnemf", "mentati"},
	{296640202, "gtaio luSnemf", "on fault"},
};

int				main(void)
{
	int			i;
	t_testcase	test;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(*g_tests)))
	{
		test = g_tests[i];
		reset_putchar();
		printf("putchar_base(%d, '%s')\n", test.i, test.base);
		g_putchar_off = 1;
		ft_putnbr_base(test.i, test.base);
		g_putchar_off = 0;
		printf("You: %s\nExp: %s\n", g_putchar, test.out);
		if (strcmp(g_putchar, test.out))
			printf("FAIL\n");
		i++;
	}
	return (0);
	ft_putnbr_base(2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(2147483648, "o|");
	ft_putchar('\n');
	printf("\nputnbr(2147483648, '0123456789abcdefghijklmnopqrstuv'\n");
	ft_putnbr_base(2147483648, "0123456789abcdefghijklmnopqrstuv");
	ft_putchar('\n');
}
