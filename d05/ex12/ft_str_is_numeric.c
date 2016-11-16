/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:18:16 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 18:18:19 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_char_is_numeric(char c);

int				ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_numeric(*str++) == 0)
			return (0);
	}
	return (1);
}

int				ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
