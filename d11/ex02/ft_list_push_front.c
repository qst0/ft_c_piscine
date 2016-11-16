/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:07:11 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 19:08:17 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
** something
** to
** fill
*/

void		ft_list_push_front(t_list **ptr_head, void *data)
{
	t_list		*cur;

	cur = ft_create_elem(data);
	if (*ptr_head == NULL)
		*ptr_head = cur;
	else
	{
		cur->next = *ptr_head;
		*ptr_head = cur;
	}
}
