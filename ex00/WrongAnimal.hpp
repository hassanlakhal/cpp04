/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:39:20 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 02:03:48 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    const std::string& getType() const;
    virtual void makeSound() const ;
    ~WrongAnimal();
};


