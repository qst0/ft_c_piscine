/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:11:25 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 22:12:06 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int			ft_buf_compare(char *buf1, char *buf2);
int			check_rush00(char *buf, int col_c, int row_c);
char		*ft_read_tests(char *buf, int buf_cap);
int			ft_count_rows(char *buf);
int			ft_count_columns(char *buf);
char		*ft_read_stdin(char *buf, int buf_cap);
void		ft_putchar(char c);
void		ft_putnbr(int nbr);
void		ft_putstr(char *str);
int			ft_strcmp(char *str1, char *str2);
void		*ft_memcpy(void *dst, const void *src, unsigned int size);
void		*ft_realloc(void *ptr, unsigned int size);

#endif
