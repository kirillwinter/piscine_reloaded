# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wballaba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 16:17:59 by wballaba          #+#    #+#              #
#    Updated: 2018/11/22 16:18:00 by wballaba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c
INCLUDES=includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(INCLUDES) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
