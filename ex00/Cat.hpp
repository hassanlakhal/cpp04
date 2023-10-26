/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:02 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/26 22:59:10 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// #include<iostream>
#include"Animal.hpp"

class Cat:public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    ~Cat();
    void makeSound() const;
};


