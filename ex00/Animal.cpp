/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 16:50:52 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Animal.hpp"

Animal::Animal()
{
     std::cout << "Default constructor Animal" << std::endl;
}

Animal::Animal(const std::string& type):type(type)
{
    std::cout << "Parametrize constructor Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << " Destructor Animal" << std::endl;
}

const std::string& Animal::getType() const
{
    return this->type;
}
void Animal::makeSound() const
{
    std::cout << "Generic Animal sound" << std::endl;
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}