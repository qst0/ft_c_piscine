/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:08:50 by kyork             #+#    #+#             */
/*   Updated: 2016/08/16 14:09:23 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CSC_P2 printf("FAIL %d:\nYou: %s\nLib: %s\n",__LINE__,youbuf,stdbuf)
#define CHECKSTRCMP cmp=strcmp(youbuf,stdbuf);if(cmp)CSC_P2
#define CRV_P2 __LINE__, result, stdlib
#define CHECKRETVAL if(result!=stdlib)printf("FAIL %d: %d != %d\n", CRV_P2)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);

int				main(void)
{
	char	youbuf[100];
	char	stdbuf[100];
	int		result;
	int		stdlib;
	int		cmp;

	memset(youbuf, 0, 100);
	memset(stdbuf, 0, 100);
	result = ft_strlcpy(youbuf, "XXX", 0);
	stdlib = strlcpy(stdbuf, "XXX", 0);
	CHECKRETVAL;
	CHECKSTRCMP;
	printf("You: %s\nLib: %s\n", youbuf, stdbuf);
	result = ft_strlcpy(youbuf, "HelloXXXX", 6);
	stdlib = strlcpy(stdbuf, "HelloXXXX", 6);
	CHECKRETVAL;
	CHECKSTRCMP;
	printf("You: %s\nLib: %s\n", youbuf, stdbuf);
	result = ft_strlcpy(youbuf + 5, ", World!", 100 - 6);
	stdlib = strlcpy(stdbuf + 5, ", World!", 100 - 6);
	CHECKRETVAL;
	CHECKSTRCMP;
	printf("You: %s\nLib: %s\n", youbuf, stdbuf);
}
