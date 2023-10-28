/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 21:36:59 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    Animal *animal[8];
    Brain *a = new Brain;
    int i;
    i = 0;
    for (size_t cpt = 0; cpt < 100; cpt ++)
    {
        a->addIdeas(cpt,"test ");
    }
    
    while (i < 8)
    {
        if (i % 2 == 0)
          animal[i] = new Dog();
        else
            animal[i] = new Cat(a);
        i++;
    }
    // std::cout << animal[5]->getBrain()->getIdea(1) << std::endl;
    i = 0;
    while (i < 8)
    {
        delete animal[i];
        i++;
    }
    return 0;
}