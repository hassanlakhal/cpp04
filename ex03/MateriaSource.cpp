/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:24:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/06 06:57:28 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

int MateriaSource::ind = 0;

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    
    for (int i = 0; i < 4; i++)
    {
        if(slots[i])
        {
            delete slots[i];
            slots[i] = NULL;
        }        
    }    
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.slots[i])
        {
            slots[i] = other.slots[i]->clone();
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        if (other.slots[i])
        {
            slots[i] = other.slots[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* T)
{
    for (int i = 0; i < 4; i++)
    {
        if (!slots[i])   
        {
            slots[i] = T;
            MateriaSource::ind++;
            return ;
        }
    }
    if( MateriaSource::ind >= 4)
        delete T;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
   for (int i = 0; i < 4; i++)
   {
        if (slots[i] && slots[i]->getType() == type)
        {
            return slots[i]->clone();
        }
   }
   return NULL;
}