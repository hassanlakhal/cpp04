/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 17:08:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"
#include"Cure.hpp"
#include"Character.hpp"
#include"MateriaSource.hpp"



int main1()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
       src->learnMateria(new Ice());
    src->learnMateria(new Cure());
       src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(0);
     me->unequip(0);
      me->unequip(1);
       me->unequip(2);
        me->unequip(3);
         me->unequip(4);
          me->unequip(5); 
          me->unequip(6);   
    delete bob;
    delete me;
    delete src;
    return 0;
}
int main()
{
    main1();
    system("leaks A_animal");
}