/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:44:56 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 22:12:15 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <errno.h>
#define BUF_SIZE 29696

int			ft_cat(char *file_name)
{
	int		read_ret;
	char	buf[BUF_SIZE];

	if (ft_strcmp(file_name, "-") == 0)
	{
		while ((read_ret = read(0, buf, BUF_SIZE)) > 0)
			write(1, buf, read_ret);
	}
	else
	{
		read_ret = ft_display_file(file_name);
	}
	return (read_ret);
}

int			main(int argc, char **argv)
{
	int errflag;
	int i;

	i = 1;
	errflag = 0;
	ft_set_progname(argv[0]);
	if (argc == 1)
		errflag = ft_cat("-");
	if (errflag != 0)
		err_print(errno, argv[i]);
	if (errflag != 0)
		return (1);
	while (i < argc && errflag > -1)
	{
		errflag = ft_cat(argv[i]);
		if (errflag != 0)
		{
			err_print(errno, argv[i]);
			return (1);
		}
		i++;
	}
	return (0);
}
