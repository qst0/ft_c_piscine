/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 02:05:23 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 21:59:11 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

int			ft_display_file(char *file_name)
{
	int		fd;
	int		read_ret;
	char	buf[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (fd);
	while ((read_ret = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, read_ret);
	close(fd);
	return (read_ret);
}
