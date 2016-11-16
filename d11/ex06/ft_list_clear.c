/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 13:45:51 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 21:07:44 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_clear(t_list **phead)
{
	t_list		*prev;

	while (*phead)
	{
		prev = *phead;
		*phead = (*phead)->next;
		free(prev);
	}
}
