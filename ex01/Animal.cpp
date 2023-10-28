/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/28 20:10:49 by hlakhal-         ###   ########.fr       */
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
    std::cout << "called Destructor Animal" << std::endl; 
}

const std::string& Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Generic animal sound" << std::endl;
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