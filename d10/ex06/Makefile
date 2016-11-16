# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myoung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 12:51:39 by myoung            #+#    #+#              #
#    Updated: 2016/08/23 12:51:15 by myoung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	do-op
LIB			=	ftlib.a
MAIN		=	srcs/main.c
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
FILENAMES	+=	ft_putnbr.c ft_atoi.c ft_do_op.c

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I includes
AR			?=	ar

SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf build/

fclean: libclean
	rm -f $(NAME)

libclean: clean
	rm -f $(LIB)

re: fclean all

build:
	mkdir build/

$(NAME): $(LIB) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) $(LIB) -o $@

$(LIB): $(OBJECTS)
	$(AR) crs $@ $(OBJECTS)

build/%.o: srcs/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@
