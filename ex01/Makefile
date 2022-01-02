# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <adidion@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/31 12:25:31 by adidion           #+#    #+#              #
#    Updated: 2022/01/02 12:04:01 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

NAME =	annauaire

SRCS =	annuaire.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean:
	rm -f $(OBJS) $(OB)

fclean: clean
	rm -f $(NAME) $(OB)

re: fclean all

.PHONY: re bonus clean fclean all