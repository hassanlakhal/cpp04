/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:27:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/30 20:37:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character()
{
    
}

Character::Character(const std::string& name):name(name)
{
 
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
    } 
}

Character::~Character()
{
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
    {
       inventory[idx] = nullptr;
    }
    
}
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
    {
        inventory[idx]->use(target);
    }
      
}
std::string const & Character::getName() const
{
    return name;
}