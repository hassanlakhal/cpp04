/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 19:01:44 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Cat.hpp"

Cat::Cat():Animal("Cat")
{
    this->ideas = new Brain;
}

Cat::~Cat()
{
}


Cat::Cat(Brain *b)
{
    this->ideas = b;
}  

void Cat::makeSound() const
{
    std::cout << "MYAWMYAW" << std::endl;
}

#endif