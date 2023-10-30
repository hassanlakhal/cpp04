/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:24:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/30 20:34:37 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
    }
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* T)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == nullptr)   
        {
            inventory[i] = T;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
   for (int i = 0; i < 4; i++)
   {
        if (inventory[i] != nullptr && inventory[i]->getType() == type)
        {
            return inventory[i]->clone();
        }
   }
   return nullptr;
}