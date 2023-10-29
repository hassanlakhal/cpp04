/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 02:56:00 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"A_animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
    const A_animal* j = new Dog();
    const A_animal* i = new Cat();

    i->makeSound();
    j->makeSound();
    
    delete j;
    delete i;
    return 0;
}