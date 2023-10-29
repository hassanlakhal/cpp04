/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:36:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const std::string& type):type(type)
{
}

Animal::~Animal()
{
}
const std::string& Animal::getType() const
{
    return this->type;
}
void Animal::makeSound() const
{
    std::cout << "Generic Animal sound" << std::endl;
}