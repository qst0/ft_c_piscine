# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyork <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 09:02:39 by kyork             #+#    #+#              #
#    Updated: 2016/08/30 14:04:48 by kyork            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILENAMES	= main.c grid.c parse.c solve.c ft_buf_putchar.c
FILENAMES	+= 
NAME		= bsq
LIBFT		= lib/libft.a
BENCH		= bench_bsq

LIBFT_FILES = ft_putchar.c ft_putnbr.c ft_atoi.c ft_read_input.c
LIBFT_FILES	+=

CC		= gcc
CFLAGS	+= -Wall -Wextra -Werror
LFLAGS	= $(CFLAGS)
CFLAGS	+= -I includes/

ifeq ($(DEBUG), 1)
	CFLAGS += -fsanitize=address
	LFLAGS += -fsanitize=address
else
	CFLAGS += -O3 -fomit-frame-pointer -DNDEBUG -flto
	LFLAGS += -O3 -fomit-frame-pointer -DNDEBUG -flto
endif

SRCS	= $(addprefix srcs/, $(FILENAMES))
OBJS	= $(addprefix build/, $(FILENAMES:.c=.o))

LIBFT_SRCS = $(addprefix lib/srcs/, $(LIBFT_FILES))
ifeq ($(DEBUG), 1)
	OBJS	+= $(LIBFT)
	LIBFT_OBJS = $(addprefix lib/build/, $(LIBFT_FILES:.c=.o))
else
	OBJS += $(addprefix lib/build/, $(LIBFT_FILES:.c=.o))
endif

BENCH_SRCS = srcs/benchmark.c lib/srcs/ft_read_input.c
BENCH_OBJS = build/benchmark.o lib/build/ft_read_input.o

.PHONY: all clean fclean re

all: $(NAME)

re: fclean all

clean:
	rm -rf build/
	rm -rf lib/build/

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

build:
	mkdir build/

lib/build:
	mkdir lib/build/

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) -o $@ $^

$(BENCH): $(BENCH_OBJS)
	$(CC) $(LFLAGS) -o $@ $^

$(LIBFT): $(LIBFT_OBJS)
	ar rcs $@ $^

build/%.o: srcs/%.c includes/*.h | build
	$(CC) $(CFLAGS) -c $< -o $@

lib/build/%.o: lib/srcs/%.c includes/*.h | lib/build
	$(CC) $(CFLAGS) -c $< -o $@

