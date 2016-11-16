/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:50:20 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 21:53:17 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** declare two unsigned chars for our values
** declare an int for our loop
**
** while the current char in the string is not the same in both
** and the the first string is not 0
** and i < n
** move down the string.
** once we break one of these
** check again that we don't have the i < n case
** if we don't return the difference of the chars
** after they are saved as unsigned chars
** if we do, return (0)
*/

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	s1_value;
	unsigned char	s2_value;
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != 0) && i < n)
		i++;
	if (i < n)
	{
		s1_value = s1[i];
		s2_value = s2[i];
		return (s1_value - s2_value);
	}
	return (0);
}
