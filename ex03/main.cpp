/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 18:42:28 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"
#include"Cure.hpp"
#include"Character.hpp"
#include"MateriaSource.hpp"



int main1()
{
        ICharacter *player = new Character("Kratos");

        player->equip(new Ice());
        player->equip(new Cure());
        player->equip(new Cure());
        player->equip(new Ice());

        
        player->use(0, *player);
        player->use(1, *player);

        player->equip(new Cure()); 
        player->equip(new Cure());
        player->equip(new Cure());// must print Full inventory
        player->equip(new Cure());
        player->equip(new Cure());
        player->equip(new Cure());
        player->equip(new Cure());

         player->use(2, *player);
        player->use(3, *player);

        player->unequip(0);
        player->unequip(1);
        player->unequip(2);
        player->unequip(3);
        player->unequip(4);
         player->use(4, *player);
        player->use(5, *player); // here 
        // player->unequip(4); // materia not found

        delete player;
        return 0;
}
int main()
{
    main1();
    // system("leaks A_animal");
}