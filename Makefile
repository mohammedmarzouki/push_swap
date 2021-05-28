# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 09:23:21 by mmarzouk          #+#    #+#              #
#    Updated: 2021/05/28 12:25:02 by mmarzouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc = gcc -Wall -Wextra -Werror

srcs =	./swapit/basics_checks.c ./swapit/main.c \
		./swapit/libft_tools.c \
		./swapit/tools.c ./swapit/tools2.c ./swapit/tools3.c\
		./swapit/ops.c ./swapit/ops2.c\
		./swapit/ops3.c 
		

NAME = push_swap


all: $(NAME)

$(NAME): $(srcs)
		$(gcc) -o $(NAME) $(srcs)

clean: 
	rm -rf $(NAME)

fclean:	clean

re: fclean all
		