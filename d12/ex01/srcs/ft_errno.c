/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:52:48 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 13:58:54 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdio.h>

const char		*ft_strerror(int errnum)
{
	if (errnum < 0)
		errnum = -errnum;
	if (errnum < sys_nerr)
	{
		return (sys_errlist[errnum]);
	}
	return ("Unknown error");
}
