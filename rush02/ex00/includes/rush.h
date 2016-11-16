/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 20:46:47 by myoung            #+#    #+#             */
/*   Updated: 2016/08/28 21:38:09 by myoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H


void		rush_printline(int width, char start, char ending, char fill);
void		rush_solver(int w, int h, int type, char part[]);
void		rush_printfirstline(int w, int type, char part[]);
void		rush_printlastline(int w, int type, char part[]);
void		ft_putchar_build(char c);
void		rush00(int a, int b);
void		rush01(int a, int b);
void		rush02(int a, int b);
void		rush03(int a, int b);
void		rush04(int a, int b);

#endif
