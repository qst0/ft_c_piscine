/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 02:05:23 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 21:11:02 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ft.h>
#define BUF_SIZE 4096

void		ft_display_file(char *file_name)
{
	int		fd;
	int		read_ret;
	char	buf[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return ;
	while ((read_ret = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, read_ret);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc > 2 || argc == 1)
		return (1);
	ft_display_file(argv[1]);
	return (0);
}
