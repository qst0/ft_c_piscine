/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 09:17:58 by kyork             #+#    #+#             */
/*   Updated: 2016/08/30 13:18:27 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct			s_grid {
	char	*c;
	int		w_8;
	int		width;
	int		height;
}						t_grid;

typedef unsigned long	t_u64;

# define FLAG_OKAY 0x0
# define FLAG_OBST 0x1
# define FLAG_SKIP 0x2
# define FLAG_OBST_8 0x0101010101010101

# define GET_IDX(g,x,y) ((x)+(y)*(g).w_8)
# define GET(g,x,y) ((g).c[GET_IDX(g, x, y)])
# define READ_8_LE(g,x,y) (*(t_u64*)(void*)&GET(g, x, y))
# define READ_8_BE(g,x,y) (__builtin_bswap64(READ_8_LE(g, x, y)))
# define CEIL_8(n) (((n) + 7) & ~0x07)

t_grid					read_stdin(void);
t_grid					read_file(char *filename);
t_grid					parse_grid(char *input, char dict[3]);
void					print_grid(t_grid grid, char dict[3]);
void					solve_grid(t_grid grid);
int						try_square(t_grid grid, int x, int y);

extern int				g_big_idx;
extern int				g_big_sz;

#endif
