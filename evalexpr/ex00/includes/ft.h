/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 20:48:56 by myoung            #+#    #+#             */
/*   Updated: 2016/08/27 22:10:29 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_swap(int *a, int *b);
void			ft_putnbr(int nbr);
int				ft_word_size(char *str);
int				ft_word_count(char *str);
char			**ft_split_whitespaces(char *str);

#endif
