# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 10:25:41 by snegi             #+#    #+#              #
#    Updated: 2024/08/28 10:25:43 by snegi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	c++
CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98

SRCS	=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	Animal

all:		$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re