# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/04 19:51:09 by juyang            #+#    #+#              #
#    Updated: 2021/04/04 19:51:09 by juyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Human

CC	= clang++
CFLAGS = -Wall -Wextra -Werror

SRCS	=	Brain.cpp	\
			Human.cpp \
			main.cpp

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
