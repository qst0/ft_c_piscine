/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 08:28:43 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 22:26:16 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** ft_list_push_params
** returns a t_list pointer		t_list *
** takes in argument count and argument values
**
** creates a new list that includes the argument values
** the first argument should be at the end of the list
** the first link's address in the list is returned
** aka the head
**
** We will need a few variables to work with
** t_list	*cursor;
** for pointing to where we are currently working
** t_list	*new;
** for holding our new values past argv[1]
**  while we point it to cursor
**  and set the cursor to the value of new
**
** we need to create the first element of the list
** from our argv[1] value
**
** then, while we have more arguments left
**  we are going to create the element
**  then point it to the last element created
*/

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list		*cursor;
	t_list		*new;
	int			i;

	i = 1;
	cursor = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = cursor;
		cursor = new;
		i++;
	}
	return (cursor);
}
