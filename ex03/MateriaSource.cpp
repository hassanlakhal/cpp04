/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:24:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 17:13:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

int MateriaSource::ind = 0;
AMateria *MateriaSource::inventoryDelete[] = {NULL};

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    
    for (int i = 0; i < 4; i++)
    {
        if(inventory[i])
        {
            delete inventory[i];
            inventory[i] = NULL;
        }        
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
        {
            inventory[i] = other.inventory[i]->clone();
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
        {
            inventory[i] = other.inventory[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* T)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        
        if (!inventory[i])   
        {
            inventory[i] = T;
            return ;
        }
        
    }
    inventoryDelete[MateriaSource::ind] = T;
    MateriaSource::ind++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
   for (int i = 0; i < 4; i++)
   {
        if (inventory[i] && inventory[i]->getType() == type)
        {
            return inventory[i]->clone();
        }
   }
   return NULL;
}