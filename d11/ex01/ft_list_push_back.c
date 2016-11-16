/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:09:08 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 19:28:46 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_push_back(t_list **ptr_head, void *data)
{
	t_list		*cursor;

	if (*ptr_head)
	{
		cursor = *ptr_head;
		while (cursor->next)
		{
			cursor = cursor->next;
		}
		cursor->next = ft_create_elem(data);
	}
	else
		*ptr_head = ft_create_elem(data);
}
