/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:04:56 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 12:38:27 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef char	*t_testcase;

int				ft_str_is_printable(char *str);

t_testcase		g_testcases[] = {
	"",
	"éèâ, î or ôñü or ïç",
	"by",
	"short long string",
	"shortLONG\nstring",
	"short",
	"THE RAIN\000 IN SPAIN",
	"THERAININPAIN",
	"THER\x7FzININPAIN",
	"The rain in sPain\r",
};

int				main(void)
{
	int		i;
	int		result;

	i = 0;
	while (i < (int)(sizeof(g_testcases) / sizeof(t_testcase)))
	{
		result = ft_str_is_printable(g_testcases[i]);
		printf("str_is_printable(%s) = %d\n", g_testcases[i], result);
		i++;
	}
	return (0);
}
