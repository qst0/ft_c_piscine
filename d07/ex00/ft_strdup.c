/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:00:35 by myoung            #+#    #+#             */
/*   Updated: 2016/08/18 13:29:29 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*copy;
	int		length;

	length = 0;
	while (src[length] != '\0')
		length++;
	copy = (char*)malloc(sizeof(*src) * (length + 1));
	length = 0;
	while (src[length] != '\0')
	{
		copy[length] = src[length];
		length++;
	}
	copy[length] = '\0';
	return (copy);
}
