/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 16:48:47 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "default constructor Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Copy constructor Cat" << std::endl;
    this->type = other.type; 
}

Cat& Cat::operator=(const Cat& other)
{
    if(this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MYAWMYAW" << std::endl;
}
