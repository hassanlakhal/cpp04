/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:27:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/06 20:37:06 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

AMateria* Character::trashTable[1] = {NULL};

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

Character::Character(const std::string& name):name(name)
{
 
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
    }
}

Character::Character(const Character& other):name(other.name)
{
    for (int i = 0; i < 4; i++)
    {
       if (other.slots[i]) 
            this->slots[i] = other.slots[i]->clone();
       else
         this->slots[i] =  NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
       return *this;
    name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (slots[i])
            delete slots[i];
    }
    for (int i = 0; i < 4; i++)
    {
       if (other.slots[i])
            this->slots[i] = other.slots[i]->clone();
       else
            this->slots[i] = NULL;
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) 
    {
        if (slots[i]) 
            slots[i]->removeRef();
    }
}

void Character::equip(AMateria* m) 
{
    int occupiedSlots = 0;
    for (int i = 0; i < 4; i++) 
    {
        if (slots[i]) 
            occupiedSlots++;
    }
    if (occupiedSlots < 4) 
    {
        for (int i =0; i < 4; i++) 
        {
            if (!slots[i]) 
            {
                slots[i] = m;
                if (m)
                    m->addRef();
                return ;
            }
        }
    } 
    else 
    { 
        if (m && m->getRef() == 0)
        {
            m->removeRef();
            m = NULL;
        }
        std::cout << "Can not equip more than 4 Materia " << std::endl;     
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && slots[idx])
    {
        slots[idx]->removeRef();
        slots[idx] = NULL;
    }  
    else if (idx >= 4 || idx < 0 || slots[idx] == NULL)
        std::cout << "Materia not exist" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && slots[idx])
        slots[idx]->use(target);
}

std::string const & Character::getName() const
{
    return name;
}