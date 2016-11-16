/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 11:25:49 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 12:54:52 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_atoi_base(char *num, char *base);

typedef struct	s_testcase {
	char		*s;
	char		*base;
	int			expect;
}				t_testcase;

t_testcase		g_tests[] = {
	{"Seg", "gtaio luSnemf", 1482},
	{"mentati", "gtaio luSnemf", 57067429},
	{"on fault", "gtaio luSnemf", 296640202},
	{"1", "", 0},
	{"1", "abc", 0},
	{"1", "1", 0},
	{"1", "11", 0},
	{"1", "01+", 0},
	{"1", "01-", 0},
	{" 1", "01", 0},
	{" 1", "1 ", 2},
	{"1 ", " 01", 6},
	{"1", "01", 1},
	{"210", "012", 21},
	{"42", "0123456789", 42},
	{"42", "0123456789abc", 6 * 9},
	{"ioio", "oi", 10},
	{"-2147483648", "0123456789", -2147483648},
	{"2147483647", "0123456789", 2147483647},
	{"7FFFFFFF", "0123456789ABCDEF", 2147483647},
	{"+7FFFFFFF", "0123456789ABCDEF", 2147483647},
	{"-80000000", "0123456789ABCDEF", -2147483648},
	{"+80000000", "0123456789ABCDEF", -2147483648},
};

int				main(void)
{
	t_testcase	test;
	int			i;
	int			num;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(t_testcase)))
	{
		test = g_tests[i];
		num = ft_atoi_base(test.s, test.base);
		printf("atoi_base('%s', '%s')\n", test.s, test.base);
		printf("You: %d\nExp: %d\n", num, test.expect);
		if (num != test.expect)
			printf("FAIL\n");
		i++;
	}
	return (0);
}
