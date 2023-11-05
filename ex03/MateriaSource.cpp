/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:24:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/05 03:57:36 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

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
    const Node* current = &deleteObj.getHead();
    while (current != nullptr)
    {
        Node* next = current->next;
        delete static_cast<AMateria*>(current->data);
        delete current;
        current = next;
    }
    deleteObj.setHead(NULL);
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
            return ;
        }
    }
    deleteObj.insertNode((void *)T);
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