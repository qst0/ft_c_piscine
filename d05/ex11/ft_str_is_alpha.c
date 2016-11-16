/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:46:19 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 16:41:09 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_char_is_alpha(char c);

int				ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_alpha(*str++))
			return (0);
	}
	return (1);
}

int				ft_char_is_alpha(char c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
