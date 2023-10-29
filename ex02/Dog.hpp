/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:21:21 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:40:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"A_animal.hpp"
#include"Brain.hpp"

class Dog:virtual public A_animal
{
    private:
        Brain* ideas;
    public:
        Dog();
        Dog(Brain *b);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();
        void makeSound() const;
        const Brain& getBrain() const;
};

#endif
