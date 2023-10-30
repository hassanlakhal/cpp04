/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:03 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/30 20:37:56 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure()
{
}

void Cure::setType(std::string& type)
{
    this->type = type;
}

const std::string& Cure::getType() const
{
    return type;
}

AMateria* Cure::clone() const
{
    AMateria *newType = new Cure();
    return newType;   
}

void Cure::use(ICharacter& target)
{
    std::cout << "*  heals " << target.getName() << "'s wounds *" << std::endl;
}