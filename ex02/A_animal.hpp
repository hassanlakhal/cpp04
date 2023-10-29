/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:56 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:36:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_animal_HPP
#define A_animal_HPP

#include<iostream>
#include "Brain.hpp"
class A_animal
{
    protected:
        std::string type;
    public:
        A_animal();
        A_animal(const std::string& type);
        A_animal(const A_animal& other);
        A_animal& operator=(const A_animal& other);
        virtual ~A_animal();
        const std::string& getType() const;
        virtual void makeSound() const = 0;
};

#endif