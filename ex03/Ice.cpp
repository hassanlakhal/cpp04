/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 21:47:22 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice()
{
}
void Ice::setType(const std::string& type)
{
    this->type = type;
}

const std::string& Ice::getTypeIce() const
{
    return type;
}
AMateria* Ice::clone() const
{
    AMateria *newType = new Ice;
    return newType;   
}