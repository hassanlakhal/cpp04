/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:05 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 16:55:50 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "default constructor Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "HAWHAW" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Copy constructor Dog" << std::endl;
    this->type = other.type; 
}

Dog& Dog::operator=(const Dog& other)
{
    if(this == &other)
        return *this;
    this->type = other.type;
    return *this;
}