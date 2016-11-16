/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:18:22 by myoung            #+#    #+#             */
/*   Updated: 2016/08/26 14:20:49 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *itm, int (*cmp)(void *, void *))
{
	if (*root == 0)
	{
		*root = btree_create_node(itm);
		return ;
	}
	if (cmp((*root)->item, itm) < 0)
		btree_insert_data(&(*root)->left, itm, cmp);
	if (cmp((*root)->item, itm) >= 0)
		btree_insert_data(&(*root)->right, itm, cmp);
}
