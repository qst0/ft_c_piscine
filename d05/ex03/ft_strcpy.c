/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:38:21 by myoung            #+#    #+#             */
/*   Updated: 2016/08/15 22:21:16 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** declare an index
** set our index to 0
** while our src[] at index is not equal to '\0'
**  set dst[] at index to src[] at index
**  Thusly, copy over src to dst
**  index++
** when the while condition is broke,
** set the current index of dst to the current index of src
** return the dst[]
*/

char			*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
