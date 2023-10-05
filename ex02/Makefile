# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:45:23 by araqioui          #+#    #+#              #
#    Updated: 2023/10/05 11:38:44 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Stack

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
HEADER = MutantStack.hpp MutantStack.tpp

SRC = main \

OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re