# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 12:18:51 by isfernan          #+#    #+#              #
#    Updated: 2021/09/17 14:06:38 by isfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= main.cpp	whatever.cpp

OBJS 		= $(SRCS:.cpp=.o)

CXXFLAGS	= -Wall -Werror -Wextra

NAME		= Templates

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(CXXFLAGS) -o $(NAME) $(OBJS) -std=c++98

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:			fclean all

.PHONY: all clea fclean re test