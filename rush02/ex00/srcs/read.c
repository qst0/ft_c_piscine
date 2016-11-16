/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:19:11 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 15:49:32 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ft.h>

void		*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char*)src;
	d = (char*)dst;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

void		*ft_realloc(void *ptr, unsigned int size)
{
	void			*new;

	new = malloc(size);
	ft_memcpy(new, ptr, size / 2);
	free(ptr);
	return (new);
}

char	*ft_read_stdin(char *buf, int buf_cap)
{
	int				read_size;
	int				max_read;
	int				buf_offset;
	max_read = buf_cap / 2;
	buf_offset = 0;
	while ((read_size = read(0, buf + buf_offset, max_read)) > 0)
	{
		write(1, buf + buf_offset, read_size);
		buf_offset += read_size;
		if (buf_offset + max_read >= buf_cap)
		{
			buf_cap *= 2;
			buf = ft_realloc(buf, buf_cap);
		}
	}
	buf[buf_offset + 1] = 0;
	return (buf);
}

int		ft_count_rows(char *buf)
{
	int				row_c;
	int				i;

	i = 0;
	row_c = 0;
	while(buf[i])
	{
		if(buf[i] == '\n')
			row_c++;
		i++;
	}
	return (row_c);
}

int		ft_count_columns(char *buf)
{
	int col_c;

	col_c = 0;
	while(buf[col_c] != '\n')
		col_c++;
	return (col_c);
}
