/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 17:51:49 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    Animal *Animal[4];
    int i;
    i = 0; 
    while (i < 4)
    {
        if (i % 2 == 0)
        {
            Animal[i] = new Dog();
            std::cout << "----------------------" << std::endl;
        }
        else
        {
            Animal[i] = new Cat();
            std::cout << "----------------------" << std::endl;
        }
        i++;
    }
    i = 0;
    while (i < 4)
    {
        delete Animal[i];
         std::cout << "++++++++++++++++++++" << std::endl;
        i++;
    }
    return 0;
}