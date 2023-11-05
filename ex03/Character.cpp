/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:27:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/05 05:54:17 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
// int Character::ind = 0;
// AMateria *Character::invDelete[] = {NULL};

Character::Character():deleteObj()
{
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
        slotsDelete[i] = NULL;
    }
}

Character::Character(const std::string& name):name(name),deleteObj()
{
 
    for (int i = 0; i < 4; i++)
    {
        slots[i] = NULL;
        slotsDelete[i] = NULL;
    }
}

Character::Character(const Character& other):name(other.name),deleteObj()
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
    std::cout << "copy as" << std::endl;
    if (this == &other)
       return *this;
    name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (slots[i])
            delete slots[i];
        if (slotsDelete[i])
            delete slotsDelete[i];        
    }
    for (int i = 0; i < 4; i++)
    {
       if (other.slots[i])
       {
            this->slots[i] = other.slots[i]->clone();
            this->slotsDelete[i] =  other.slots[i]->clone();
       } 
       else
       {    this->slotsDelete[i] = NULL;
            this->slots[i] = NULL; 
       }
    }
    return *this;
}

Character::~Character()
{
    bool dup;
    AMateria* currentDelete;
    for (int i = 0; i < 4; ++i) 
    {
        dup = false;
        currentDelete = slots[i];
        for(int j = i + 1; j < 4; j++) {
            if (slots[j] == currentDelete) {
                dup = true;
                break ;
            }
        }
        if (!dup)
        {
            delete slots[i]; 
            slots[i] = NULL;
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        dup = false;
        currentDelete = slotsDelete[i];
        for(int j = i + 1; j < 4; j++) {
            if (slotsDelete[j] == currentDelete) {
                dup = true;
                break ;
            }
        }
        if (!dup) 
        {
            if (slotsDelete[i])
            {
                std::cout << i << "test ==> " << slotsDelete[i] << std::endl;
                delete slotsDelete[i];
                slotsDelete[i] = NULL;
            }
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
    deleteObj.insertNode((void *)m);
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