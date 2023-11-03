/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:54:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 06:17:29 by hlakhal-         ###   ########.fr       */
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
    src->learnMateria(new Cure());
    src->learnMateria(new Cure()); // leaks here
    src->learnMateria(new Ice());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("cure");
    delete tmp;
    tmp = new Ice();
    AMateria* tmp1(tmp);
    std::cout << tmp << std::endl;
    me->equip(tmp->clone());
    tmp = src->createMateria("cure");
    me->equip(tmp);
     ICharacter* bob1 = new Character("bob10");
    me->use(0, *bob1);
    ICharacter* bob = new Character("bob");
    me->use(1, *bob);
    delete bob;
     delete bob1;
    delete me;
    delete src;
    delete tmp1;
    return 0;
}
int main()
{
    main1();
    system("leaks A_animal");
}