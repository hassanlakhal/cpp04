/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:05 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:36:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(): Animal("Dog")
{
     this->ideas = new Brain;
     std::cout << "Default constructor Dog" << std::endl; 
}

Dog::Dog(Brain *b):Animal("Dog")
{
    std::cout << "Parametrize constructor Cat" << std::endl;
    this->ideas = new Brain(*b);
}

Dog::Dog(const Dog& other):Animal("Dog"), ideas(new Brain(*(other.ideas)))
{
    std::cout << "Copy constructor Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "called Destructor Dog" << std::endl;
    delete ideas;
}

void Dog::makeSound() const
{
    std::cout << "HAWHAW" << std::endl;
}
const Brain& Dog::getBrain() const
{
    return (*ideas);
}

Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return *this;
    this->type = other.getType();
    delete ideas;
    ideas = new Brain(*(other.ideas));
    return *this; 
}