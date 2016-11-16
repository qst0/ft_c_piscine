/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:01:11 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:49:15 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <sys/types.h>

void			ft_putchar(char c);
void			ft_buf_putchar(char c);
void			ft_buf_putchar_flush(void);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
int				ft_strtol_10(char *str, char **endptr);

int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);

char			*ft_strcapitalize(char *str);
int				ft_str_is_printable(char *str);

/*
** ft_read_input returns an allocated string
*/

char			*ft_read_input(int fd);
void			ft_memcpy_aligned(void *dst, void *src,
					size_t length);

# ifndef IS_SPACE
#  define IS_SPACE(x) (x==' '||x=='\n'||x=='\t'||x=='\r'||x=='\v'||x=='\f')
# endif

# ifndef UNUSED
#  define UNUSED(x) (void)(x)
# endif

#endif
