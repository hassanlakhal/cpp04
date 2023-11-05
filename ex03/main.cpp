/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/05 05:56:30 by hlakhal-         ###   ########.fr       */
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
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    // tmp = src->createMateria("cure");
   // me->equip(tmp);
    Character B("test");
    Character A;
    A = B;
    A.equip(tmp);
    A.equip(tmp);
    A.unequip(0);
    A.unequip(1);
    me->unequip(2);
    me->unequip(3);
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, A);
    me->use(1, *bob);
    me->use(2,*me);
    
    delete bob;
    // delete me;
    delete src;
    return 0;
}
int main()
{
    main1();
    system("leaks A_animal");
}