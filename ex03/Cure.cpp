/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:03 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 02:29:21 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure():AMateria("cure")
{
   
}

Cure::~Cure()
{
    
}

Cure::Cure(const Cure& other)
{
    this->type = other.type;
}

Cure& Cure::operator=(const Cure& other)
{
    if(this == &other)
        return *this;
    type = other.type;
    return *this;
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
    return new Cure(*this);   
}

void Cure::use(ICharacter& target)
{
    std::cout << "*  heals " << target.getName() << "'s wounds *" << std::endl;
}