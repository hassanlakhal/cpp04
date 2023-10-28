/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:56 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 21:36:25 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include "Brain.hpp"
class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string& type);
        virtual ~Animal();
        const std::string& getType() const;
        virtual void makeSound() const;
};

#endif