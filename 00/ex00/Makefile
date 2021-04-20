# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juyang <juyang@42student.co.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 18:34:13 by juyang            #+#    #+#              #
#    Updated: 2021/04/03 18:34:15 by juyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Megaphone

CC	=	clang++
CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

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
