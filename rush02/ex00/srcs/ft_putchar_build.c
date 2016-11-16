/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_build.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 20:49:44 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 21:10:02 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <rush.h>
#include <fcntl.h>

void		ft_putchar_build(char c)
{
	int fd;
	fd = open("test.data", O_CREAT | O_RDWR | O_APPEND);
	write(fd, &c, 1);
	close(fd);
}
