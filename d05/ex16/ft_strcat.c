/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:30:05 by myoung            #+#    #+#             */
/*   Updated: 2016/08/16 22:44:29 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcat(char *dst, char *src)
{
	int i;
	int j;

	j = -1;
	i = 0;
	while (dst[++j] != '\0')
		;
	while (src[i] != '\0')
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dst);
}