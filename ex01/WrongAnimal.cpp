/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:39:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 17:28:38 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor WrongAnimal" << std::endl; 
}

WrongAnimal::WrongAnimal(const std::string& type):type(type)
{
     std::cout << "Parametrize constructor Animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongCat"<< std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << " WrongAnimal " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Copy constructor WrongAnimal" << std::endl;
    this->type = other.type; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this == &other)
        return *this;
    this->type = other.type;
    return *this;
}