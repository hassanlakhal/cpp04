/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:08:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:36:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"A_animal.hpp"

A_animal::A_animal()
{
    std::cout << "Default constructor A_animal" << std::endl;
}

A_animal::A_animal(const std::string& type):type(type)
{
    std::cout << "Parametrize constructor A_animal" << std::endl;
}

A_animal::~A_animal()
{
    std::cout << "called Destructor A_animal" << std::endl; 
}

const std::string& A_animal::getType() const
{
    return this->type;
}

A_animal::A_animal(const A_animal& other)
{
    this->type = other.type;
}

A_animal& A_animal::operator=(const A_animal& other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}