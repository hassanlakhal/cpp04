/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:02 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:40:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

// #include<iostream>
#include"A_animal.hpp"
#include"Brain.hpp"

class Cat:public A_animal
{
    private:
        Brain* ideas;
    public:
        Cat();
        Cat(Brain *b);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound() const;
        const Brain& getBrain() const;
};
#endif


