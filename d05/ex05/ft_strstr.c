/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:33:14 by myoung            #+#    #+#             */
/*   Updated: 2016/08/17 11:08:38 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strstr(char *str, char *to_find)
{
	int i;
	int find_index;
	int remember;

	find_index = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[find_index])
		{
			remember = i;
			while (str[i] == to_find[find_index])
			{
				if (to_find[find_index++ + 1] == '\0')
					return (&str[remember]);
				i++;
			}
			find_index = 0;
			i = remember;
		}
		i++;
	}
	return (0);
}
