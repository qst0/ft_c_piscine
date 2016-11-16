/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:48:48 by myoung            #+#    #+#             */
/*   Updated: 2016/08/24 13:45:35 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **phead, void *data);
void				ft_list_push_front(t_list **phead, void *data);
int					ft_list_size(t_list *head);
t_list				*ft_list_last(t_list *head);
t_list				*ft_list_push_params(int ac, char **av);
void				ft_list_clear(t_list **phead);

#endif
