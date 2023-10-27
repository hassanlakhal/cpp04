/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 17:40:25 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    const Animal *animal[8];
    int i;
    i = 0;
    while (i < 8)
    {
        if (i % 2 == 0)
          animal[i] = new Dog();
        else
            animal[i] = new Cat;
        i++;
    }
    i = 0;
    while (i < 8)
    {
        delete animal[i];
        i++;
    }
    return 0;
}