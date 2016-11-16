/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 08:19:44 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 22:10:13 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_list_last(t_list *begin_list)
{
	t_list		*cursor;

	cursor = begin_list;
	if (cursor == 0)
		return (0);
	while (cursor->next)
	{
		cursor = cursor->next;
	}
	return (cursor);
}
