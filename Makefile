# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchaozu <kchaozu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/03 19:35:27 by kchaozu           #+#    #+#              #
#    Updated: 2019/08/03 21:56:57 by kchaozu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = checker.c \
	  fillit.c \
	  solve.c \
	  tetri.c \
	  validate.c \
	  post.c \
	  main.c 

OBJS = $(SRC:.c=.o)

INCLUDES = fillit.h

LIB = libft/libft.a

all : $(NAME)

$(OBJS): %.o: %.c
	@gcc -Wall -Werror -Wextra -c $< -I. -o $@

$(LIB):
	@make -C libft

$(NAME): $(LIB) $(OBJS)
	@gcc -Werror -Wall -Wextra $(OBJS) -o $(NAME) $(LIB)

clean:
		@rm -f $(OBJS)
		@make -C libft clean

fclean: clean
		@rm -f $(NAME)
		@make -C libft fclean

re : fclean all
