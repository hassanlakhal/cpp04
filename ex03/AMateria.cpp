/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 18:53:21 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria():type("Unknow Type")
{
    
}

AMateria::AMateria(std::string const & type):type(type)
{
    
}

AMateria::~AMateria()
{
  
}

AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if(this == &other)
        return *this;
    type = other.type;
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