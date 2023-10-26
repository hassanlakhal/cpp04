/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/26 23:08:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Cat.hpp"

Cat::Cat():Animal("Cat")
{
}

Cat::~Cat()
{
}

void Cat::makeSound() const
{
    std::cout << "MYAWMYAW" << std::endl;
}

#endif