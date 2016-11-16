/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:16:27 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 18:17:07 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_char_is_lowercase(char c);

int				ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_lowercase(*str++) == 0)
			return (0);
	}
	return (1);
}

int				ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
