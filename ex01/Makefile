# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 22:09:18 by hlakhal-          #+#    #+#              #
#    Updated: 2023/10/27 19:22:28 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC = main.cpp  Animal.cpp  Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

HDR =  Animal.hpp  Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
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