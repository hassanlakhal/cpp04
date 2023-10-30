/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/30 15:22:29 by hlakhal-         ###   ########.fr       */
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

std::string const & AMateria::getType() const
{
    return type;
} 

void AMateria::use(ICharacter& target)
{
    (void) target;
    std::cout << " not define " << std::endl; 
}