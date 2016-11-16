/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 13:44:05 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:47:35 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <unistd.h>

static char g_buf[100];
static int g_idx = 0;

void	ft_buf_putchar(char c)
{
	g_buf[g_idx++] = c;
	if (g_idx == 100)
	{
		write(1, g_buf, g_idx);
		g_idx = 0;
	}
}

void	ft_buf_putchar_flush(void)
{
	write(1, g_buf, g_idx);
	g_idx = 0;
}
