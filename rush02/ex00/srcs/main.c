/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 15:48:34 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 22:15:18 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdlib.h>
#include <rush.h>
//WTF
#include <stdio.h>

#define BUF_CAP 4096
int		main()
{
	char			*buf;
	int 			row_c;
	int				col_c;
	int				matches;
	
	matches = 0;
	buf = malloc(sizeof(char) * BUF_CAP);
	buf = ft_read_stdin(buf, BUF_CAP);
	row_c = ft_count_rows(buf);
	col_c = ft_count_columns(buf);

	matches += check_rush00(buf, col_c, row_c);	
	printf("MATCHES : %d\n", matches);
	/*
	printf("Top Left    : %c\n", buf[0]);
	printf("Top Right   : %c\n", buf[col_c - 1]);
	printf("Bottom Left : %c\n", buf[row_c * col_c - (col_c - (row_c - 1))]);
	printf("Bottom Right: %c\n", buf[row_c * col_c + (col_c - (row_c + 1))]);	
	*/
	return (0);
}

int		ft_buf_compare(char *buf1, char *buf2)
{
	int i;
	
	i = 0;
	while(buf1[i] != 0)
	{
		if(buf1[i] != buf2[i])
			return (0);
		i++;
	}
	return (1);
}

int		check_rush00(char *buf, int col_c, int row_c)
{
	//create the rush00 puzzle of the right size
	//read the file into a 2nd buf
	//compare the buf and the 2nd buf
	//if they are the same print.
	//and return 1
	//if there is no match return 0;
	char *buf_test;

	buf_test = malloc(sizeof(char) * BUF_CAP);
	rush00(col_c,row_c);
	buf_test = ft_read_tests(buf, BUF_CAP);
	if (ft_buf_compare(buf, buf_test) == 1)
		return (1);
	return (0);
}
