/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:27:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 21:21:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

int Character::ind = 0;
AMateria *Character::invDelete[] = {NULL};

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
    for (int i = 0; i < 4; ++i)
    {
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
    for (int i = 0; i < 4; ++i)
        delete slots[i];
    for (int i = 0; i < 4; ++i)
        delete slotsDelete[i];
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!slots[i])
        {
            slots[i] = m;
            return ;
        }
    }
    invDelete[Character::ind] = m;
    Character::ind++;
    std::cout << "Full slots\n";
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && slots[idx])
    {
        slotsDelete[idx] = slots[idx];
        slots[idx] = NULL;
    }  
    else if (idx >= 4 || idx < 0 || slots[idx] == NULL)
        std::cout << "Materia not exist\n";
        
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