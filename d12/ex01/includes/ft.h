/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 20:48:56 by myoung            #+#    #+#             */
/*   Updated: 2016/08/25 19:46:13 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void			ft_fputstr(int fd, char *str);
void			ft_set_progname(char *argv0);
const char		*ft_progname(void);
const char		*ft_strerror(int errnum);
int				err_print(int eno, char *filename);
int				ft_display_file(char *file_name);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_swap(int *a, int *b);

#endif
