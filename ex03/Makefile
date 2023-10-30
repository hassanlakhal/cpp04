# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 16:56:57 by hlakhal-          #+#    #+#              #
#    Updated: 2023/10/30 20:08:14 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = A_animal

SRC = main.cpp  AMateria.cpp  Cure.cpp Ice.cpp  Character.cpp MateriaSource.cpp 

HDR =  AMateria.hpp  Cure.hpp Ice.hpp Character.hpp  IMateriaSource.hpp MateriaSource.hpp

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

CXX = c++ -std=c++98

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ) $(HDR)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all