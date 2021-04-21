# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 17:52:31 by juyang            #+#    #+#              #
#    Updated: 2021/04/21 17:52:32 by juyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Serialize

CC	= clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all:	$(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)

re:	fclean all
