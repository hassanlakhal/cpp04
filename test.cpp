/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 02:20:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/01 04:30:05 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
    }

   virtual ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived; // Using a pointer to the base class to point to a derived class object

    delete basePtr; // This will call the derived class destructor correctly due to virtual destructor

    return 0;
}

