/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:02 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 21:39:25 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// #include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Cat:public Animal
{
    private:
        Brain* ideas;
    public:
        Cat();
        Cat(Brain *b);
        ~Cat();
        void makeSound() const;
        Brain* getBrain()
        {
            return (ideas);
        }
};


