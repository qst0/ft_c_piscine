/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:30:58 by myoung            #+#    #+#             */
/*   Updated: 2016/08/26 22:20:13 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
** btree_search_item
** *root, *data_ref, int (*cmpf)(void *, void *)
**
** make a *temp
**
** if root isn't null:
** 	set temp to the result of bsi(root->left, data_ref, cmpf);
** 	this will take us all the way down to the far left of our tree.
**
** 	when we are at the bottom left, all the way down in null-
** 	the top of the stack will return the last temp
**  since temp is null, we check if root->item is a match to data_ref
**	if it isn't we search right till null, then back up and continue this
**  until we reach the data in the tree, or return null on the last func
**  in the stack.
*/

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *temp;

	temp = 0;
	if (root)
	{
		temp = btree_search_item(root->left, data_ref, cmpf);
		if (temp == 0 && !(cmpf(root->item, data_ref)))
			temp = root->item;
		if (temp == 0)
			temp = btree_search_item(root->right, data_ref, cmpf);
	}
	return (temp);
}
