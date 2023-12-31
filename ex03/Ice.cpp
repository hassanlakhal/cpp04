/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 18:54:18 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice::~Ice()
{
    
}
void Ice::setType(const std::string& type)
{
    this->type = type;
}

Ice::Ice(const Ice& other)
{
    this->type = other.type;
}

Ice& Ice::operator=(const Ice& other)
{
    if(this == &other)
        return *this;
    type = other.type;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);   
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}