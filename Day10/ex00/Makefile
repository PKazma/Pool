# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibahari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/25 22:27:45 by ibahari           #+#    #+#              #
#    Updated: 2017/03/27 05:50:28 by ibahari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = libft.a

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c \

SRCS.O = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o \

all: $(NOM)

$(NOM):
	gcc -c -Wall -Wextra -Werror $(SRCS)
	ar rc $(NOM) $(SRCS.O)

clean:
	rm -f $(SRCS.O)

fclean: clean
	rm -f $(NOM)

re: fclean all
