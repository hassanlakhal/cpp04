/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:21:21 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 16:54:27 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog:public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        void makeSound() const;
};

#endif
