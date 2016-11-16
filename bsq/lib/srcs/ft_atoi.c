/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 12:41:31 by kyork             #+#    #+#             */
/*   Updated: 2016/08/28 12:39:36 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

/*
** man isspace
*/

static char	*end_of_num(char **str)
{
	char	*s;
	int		any;

	any = 0;
	while (**str == '0')
	{
		(*str)++;
		any = 1;
	}
	s = *str;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			break ;
		s++;
		any = 1;
	}
	if (!any)
		return (0);
	return (s);
}

int			ft_strtol_10(char *str, char **endptr)
{
	char				*s;
	unsigned long long	result;
	int					sign;

	while (IS_SPACE(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	*endptr = end_of_num(&str);
	if (!*endptr)
		return (0);
	result = 0;
	s = str;
	while (s < *endptr)
	{
		result = result * 10LL + (*s - '0');
		s++;
	}
	if ((*endptr - str) > 19 || result >= 9223372036854775808uLL)
		return ((sign == 1) ? -1 : 0);
	return (sign * result);
}
