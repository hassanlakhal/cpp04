/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:03 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 21:47:38 by hlakhal-         ###   ########.fr       */
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