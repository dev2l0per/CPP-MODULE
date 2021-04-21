# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyang <juyang@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 17:03:19 by juyang            #+#    #+#              #
#    Updated: 2021/04/21 17:03:21 by juyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Conversion

CC	= clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	=	Converter.cpp \
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

