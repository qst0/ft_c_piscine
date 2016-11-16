/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_progname.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 16:23:57 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 20:30:27 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char			*g_progname;

void			ft_set_progname(char *argv0)
{
	char *slash;

	slash = 0;
	while (*argv0)
	{
		if (*argv0 == '/')
			slash = argv0;
		argv0++;
	}
	if (slash)
		g_progname = slash + 1;
	else
		g_progname = argv0;
}

const char		*ft_progname(void)
{
	return (g_progname);
}
