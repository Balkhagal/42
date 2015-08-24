# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmoulin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 21:27:33 by pmoulin           #+#    #+#              #
#    Updated: 2015/07/21 21:36:34 by pmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = /bin/srcs/ ft_putchar.h ft_putstr.h ft_strcmp.h ft_strlen.h ft_swap.h

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
