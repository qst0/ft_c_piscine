/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 08:33:51 by myoung            #+#    #+#             */
/*   Updated: 2016/08/19 09:09:46 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_rot42(char *str)
{
	int		char_num;
	int		i;
	char	low_or_cap;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			low_or_cap = str[i] >= 'a' && str[i] <= 'z' ? 'a' : 'A';
			char_num = (((str[i] - low_or_cap) + 16));
			char_num = char_num > 25 ? char_num - 26 : char_num;
			str[i] = char_num + low_or_cap;
		}
		i++;
	}
	return (str);
}
