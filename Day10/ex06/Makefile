# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibahari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/25 22:27:45 by ibahari           #+#    #+#              #
#    Updated: 2017/03/29 18:30:44 by ibahari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOM = do-op

SRCS = ft_putchar_str_nbr.c \
	   ft_atoi.c \
	   ft_operations.c \
	   ft_errors.c \
	   ft_strcmp.c \
	   ft_do_op.c \

all: $(NOM)

$(NOM):
	gcc -Weverything -o $(NOM) $(SRCS)

clean:
	rm -f $(NOM)

fclean:
	rm -f $(NOM)

re: fclean all
