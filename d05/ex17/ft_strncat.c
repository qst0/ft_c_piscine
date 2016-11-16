/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:44:47 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 22:55:49 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncat(char *dst, char *src, int nb)
{
	int i;
	int j;

	j = -1;
	i = 0;
	while (dst[++j] != '\0')
		;
	while (src[i] != '\0' && i < nb)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dst);
}
