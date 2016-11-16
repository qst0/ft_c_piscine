/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:35:51 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 21:49:16 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_char_is_printable(char c);

int				ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_printable(*str++) == 0)
			return (0);
	}
	return (1);
}

int				ft_char_is_printable(char c)
{
	if (c >= 32 && c < 0x7F)
		return (1);
	return (0);
}
