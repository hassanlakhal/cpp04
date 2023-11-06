/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/06 20:39:45 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria():type("Unknow Type"),refCount(0)
{
    
}

AMateria::AMateria(std::string const & type):type(type),refCount(0)
{
    
}

AMateria::~AMateria()
{
  
}

AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
    this->refCount = other.refCount;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if(this == &other)
        return *this;
    type = other.type;
    this->refCount = other.refCount;
    return *this;
}

std::string const & AMateria::getType() const
{
    return type;
} 

void AMateria::use(ICharacter& target)
{
    (void) target;
    std::cout << " not define " << std::endl; 
}
void AMateria::removeRef()
{
    refCount--;
    if (refCount <= 0) 
    {
        delete this;
    }
} 
void AMateria::addRef()
{
     refCount++;
}

int AMateria::getRef() const
{
    return refCount;
}