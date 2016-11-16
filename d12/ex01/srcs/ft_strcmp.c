/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 19:09:25 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 09:01:00 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	unsigned char	s1_value;
	unsigned char	s2_value;
	int				i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	s1_value = s1[i];
	s2_value = s2[i];
	return (s1_value - s2_value);
}
