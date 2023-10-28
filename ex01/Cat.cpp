/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/28 22:56:38 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"Cat.hpp"

Cat::Cat():Animal("Cat"),ideas(new Brain())
{
    std::cout << "Default constructor Cat" << std::endl; 
}

Cat::Cat(Brain *b): Animal("Cat")
{
    std::cout << "Parametrize constructor Cat" << std::endl;
    this->ideas = new Brain(*b);
}  

Cat::Cat(const Cat& other):Animal("Cat"), ideas(new Brain(*(other.ideas)))
{
    std::cout << "Copy constructor Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "called Destructor Cat" << std::endl;
    delete ideas;
}

void Cat::makeSound() const
{
    std::cout << "MYAWMYAW" << std::endl;
}

const Brain& Cat::getBrain() const
{
    return (*ideas);
}

Cat& Cat::operator=(const Cat& other)
{
    if (this == &other)
        return *this;
    this->type = other.getType();
    delete ideas;
    ideas = new Brain(*(other.ideas));
    return *this; 
}