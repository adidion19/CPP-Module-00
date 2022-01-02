# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <adidion@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 12:11:30 by adidion           #+#    #+#              #
#    Updated: 2022/01/02 12:12:43 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

NAME =	account

SRCS =	tests.cpp\
		account.cpp\

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