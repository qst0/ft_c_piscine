/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:19:11 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 22:03:34 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ft.h>

char	*ft_read_tests(char *buf, int buf_cap)
{
	int				read_size;
	int				max_read;
	int				buf_offset;
	int				fd;

	max_read = buf_cap / 2;
	buf_offset = 0;
	fd = open("test.data", O_RDONLY);
	while ((read_size = read(fd, buf + buf_offset, max_read)) > 0)
	{
		buf_offset += read_size;
		if (buf_offset + max_read >= buf_cap)
		{
			buf_cap *= 2;
			buf = ft_realloc(buf, buf_cap);
		}
	}
	buf[buf_offset + 1] = 0;
	close(fd);
	return (buf);
}
