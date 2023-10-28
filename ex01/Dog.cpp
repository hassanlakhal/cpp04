/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:09:05 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 16:32:58 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(): Animal("Dog")
{
     this->ideas = new Brain;
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
    std::cout << "HAWHAW" << std::endl;
}