/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:39:23 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 17:28:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
  std::cout << "Default constructor WrongCat"<< std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "WrongCat sound" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "Copy constructor WrongCat" << std::endl;
    this->type = other.type; 
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this == &other)
        return *this;
    this->type = other.type;
    return *this;
}