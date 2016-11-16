/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:02:58 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 19:31:29 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** while the current char in the string is a space.
**  increase str till it isn't.
** set the starting result to zero.
** set the sign to -1 if we have a '-'
** increase past the sign char.
** increase past the zeros.
** for this next loop, use an i
** while we are not at the \0 and we have a digit char
**  take the result and set it to:
**   the result * 10 + the current digitchar minus the '0' char.
** if we are dealing with a number that is longer than 19 digits
**  or higher then the max or min LL,
**  check the sign, pos / neg return -1 or 0 respectivly
**  return the result time the sign.
*/

int			ft_atoi(char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	while (str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		str++;
	result = 0;
	sign = (str[0] == '-' ? -1 : 1);
	str = (str[0] == '-' || str[0] == '+') ? str + 1 : str;
	while (str[0] == '0')
		str++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
		return (sign == 1 ? -1 : 0);
	return (result * sign);
}
