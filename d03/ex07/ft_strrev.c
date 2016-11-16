/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:13:08 by myoung            #+#    #+#             */
/*   Updated: 2016/08/12 23:16:43 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_strlen_2(char *str);

char		*ft_strrev(char *str)
{
	int length;
	int i;

	length = ft_strlen_2(str);
	i = 0;
	while (i < length / 2)
	{
		str[length] = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = str[length];
		i++;
	}
	str[length] = '\0';
	return (str);
}

int			ft_strlen_2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
