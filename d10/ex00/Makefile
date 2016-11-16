# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myoung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 12:51:39 by myoung            #+#    #+#              #
#    Updated: 2016/08/23 14:38:28 by myoung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I includes
AR			?=	ar

SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o))
#build/ft_putchar.o build/ft_putstr.o ...

# Even if a file exisits, don't process with it.
.PHONY: all clean fclean re

#This happens to be our first command, so it is the default	
all: $(NAME)

clean:
	rm -rf build/

fclean: clean
	rm -f $(NAME)

re: fclean all

build:
	mkdir build/

helloworld: helloworld.c
	@gcc helloworld.c -o helloworld
	@./helloworld
	@rm -f helloworld.c
	@rm -f helloworld

helloworld.c:
	@echo "#include <unistd.h>" >> helloworld.c
	@echo "int main(){" >> helloworld.c
	@echo 'write(1, "Hello World, I have\\' >> helloworld.c
	@echo ' too much time.........", 42);' >> helloworld.c
	@echo "return (0); " >> helloworld.c
	@echo "}" >> helloworld.c

#This is the rule for our NAME, prerequisites are our objects
#Once we have all of our objects made, it will create a library
#rcs creates or updates the library with (c)reate (r)eplacement (s)ort
#sort is the same as running ranlib, it will update the index if it exisits already
#libft.a: build/ft_putchar.o build/ft_putstr.o ...
$(NAME): $(OBJECTS)
	$(AR) crs $@ $(OBJECTS)
#ar crs libft.a build/ft_putchar.o build/ft_putstr.o build/ft_strcmp.o ...

#This will compile objects for populating build/
#The -c flag prevents linking and just compiles .o objects
#The -o flag is for naming our output
# $< gets the name of the first prerequisite
# $@ gets the file name of the target of the rule
# build/ft_putchar.o: src/ft_putchar.c | build
build/%.o: srcs/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@
# gcc -Wall -Wextra -Werror -I includes -c srcs/ft_putchar.o -o build/ft_putchar.o
