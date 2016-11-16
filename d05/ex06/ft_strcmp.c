/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 19:09:25 by myoung            #+#    #+#             */
/*   Updated: 2016/08/17 16:27:50 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strcmp takes in two char[], let them be s1 and s2
** set up an unsigned char for the values, s1v and s2v
** set up an iterator let that be i and set it to 0
** while s1[i] is the same as s2[i] and s1[i] isn't null
**  move down the string, by iteratting i
** set s1v to s1[i]
** set s2v to s2[i]
** return the difference of s1v and s2v: s1v - s2v
*/

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
