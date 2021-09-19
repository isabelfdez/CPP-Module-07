# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 22:56:03 by user42            #+#    #+#              #
#    Updated: 2021/09/19 23:14:33 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= main.cpp

OBJS 		= $(SRCS:.cpp=.o)

CXXFLAGS	= -Wall -Werror -Wextra

NAME		= Array

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(CXXFLAGS) -o $(NAME) $(OBJS) -std=c++98

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:			fclean all

.PHONY: all clea fclean re test