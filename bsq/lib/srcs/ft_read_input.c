/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:48:53 by thendric          #+#    #+#             */
/*   Updated: 2016/08/30 13:29:00 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <ft.h>

#define MAX_READ 4096

/*
** Keep CPY_TYPE as char to trigger autovectorization (-O3)
*/

#define CPY_TYPE char
#define CPY_WSIZE sizeof( CPY_TYPE )
#define CPY_WMASK (CPY_WSIZE - 1)

void	ft_memcpy_aligned(void *dst, void *src, size_t length)
{
	size_t	t;

	if (!src)
		return ;
	src += length;
	dst += length;
	t = length / CPY_WSIZE;
	while (t > 0)
	{
		src -= CPY_WSIZE;
		dst -= CPY_WSIZE;
		*(CPY_TYPE*)dst = *(CPY_TYPE*)src;
		t--;
	}
}

char	*ft_realloc(char *buf, ssize_t *buf_cap)
{
	ssize_t	old_cap;
	char	*newbuf;

	old_cap = *buf_cap;
	*buf_cap = old_cap * 2;
	newbuf = malloc(*buf_cap);
	ft_memcpy_aligned(newbuf, buf, old_cap);
	free(buf);
	return (newbuf);
}

char	*ft_read_input(int fd)
{
	ssize_t	read_size;
	char	*buf;
	ssize_t buf_cap;
	ssize_t buf_offset;

	buf_cap = MAX_READ / 2;
	buf = ft_realloc(NULL, &buf_cap);
	buf_offset = 0;
	while ((read_size = read(fd, buf + buf_offset, MAX_READ)) > 0)
	{
		buf_offset = buf_offset + read_size;
		if (buf_cap - buf_offset < MAX_READ + 1)
			buf = ft_realloc(buf, &buf_cap);
	}
	buf[buf_offset] = 0;
	return (buf);
}
