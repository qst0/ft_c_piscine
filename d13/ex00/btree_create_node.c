/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 08:23:53 by myoung            #+#    #+#             */
/*   Updated: 2016/08/26 13:40:27 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree			*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = malloc(sizeof(t_btree));
	new_node->left = 0;
	new_node->right = 0;
	new_node->item = item;
	return (new_node);
}
