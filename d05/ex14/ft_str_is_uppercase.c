/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:17:11 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 21:31:36 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_char_is_uppercase(char c);

int				ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_uppercase(*str++) == 0)
			return (0);
	}
	return (1);
}

int				ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
