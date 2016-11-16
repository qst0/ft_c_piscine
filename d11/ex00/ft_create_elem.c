/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:48:27 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 20:57:55 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
** ft_create_elem
** return *t_list
** params void *data
**
** declare a t_list pointer called head
**
** malloc space for head, size of t_list
**
** (*head).data = data;
** is the same as
** head->data = data;
**
** set head's data to our void *data from our param
** set head's next to NULL
** return head
*/

t_list			*ft_create_elem(void *data)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}
