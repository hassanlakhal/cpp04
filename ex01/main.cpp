/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/28 23:52:22 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    Animal *animal[4];
    //Brain *a = new Brain;
    int i;
    i = 0;
    // for (size_t cpt = 0; cpt < 100; cpt ++)
    // {
    //     if (cpt % 2 == 0)
    //          a->addIdeas(cpt,"test ");
    //     else
    //         a->addIdeas(cpt,"Cat CAT");
        
    // }
    
    while (i < 4)
    {
        if (i % 2 == 0)
          animal[i] = new Dog();
        else
            animal[i] = new Cat();
        i++;
    }
    // std::cout << a->getIdea(2)<< std::endl;
    i = 0;
    while (i < 4)
    {
        delete animal[i];
        i++;
    }
    return 0;
}