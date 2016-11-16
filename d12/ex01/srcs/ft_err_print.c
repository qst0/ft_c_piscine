/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 15:33:30 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 20:27:18 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int			err_print(int eno, char *filename)
{
	if (eno == 0)
		return (0);
	ft_fputstr(2, (char*)ft_progname());
	ft_fputstr(2, ": ");
	ft_fputstr(2, filename);
	ft_fputstr(2, ": ");
	ft_fputstr(2, (char*)ft_strerror(eno));
	ft_fputstr(2, "\n");
	return (1);
}
