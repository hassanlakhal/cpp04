# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 22:09:18 by hlakhal-          #+#    #+#              #
#    Updated: 2023/10/29 00:52:40 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = A_animal

SRC = main.cpp  A_animal.cpp  Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

HDR =  A_animal.hpp  Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
CXXFLAGS = -Wall -Wextra -Werror

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