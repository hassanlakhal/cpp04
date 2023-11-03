/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:27:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 03:30:03 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     inventoryDelete[i] = NULL;
    // }  
}

Character::Character(const std::string& name):name(name)
{
 
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     inventoryDelete[i] = NULL;
    // }  
}

Character::Character(const Character& other):name(other.name)
{
    for (int i = 0; i < 4; i++)
    {
       if (other.inventory[i] != NULL) 
       {
            this->inventory[i] = other.inventory[i]->clone();
       }
       else
         this->inventory[i] =  NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
       return *this;
    name = other.name;
    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
       if (other.inventory[i] != NULL) 
       {
            this->inventory[i] = other.inventory[i]->clone();
       }
       else
           this->inventory[i] = NULL;  
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        delete inventory[i];
    }
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
    {
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
    {
        inventory[idx]->use(target);
    }
}

std::string const & Character::getName() const
{
    return name;
}