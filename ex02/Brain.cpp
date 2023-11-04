/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:44:39 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 17:53:42 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor Brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "called Destructor Brain" << std::endl;
}

void Brain::addIdeas(int index, std::string idea)
{
    if (index >= 0 && index < 100)
    {
        this->ideas[index] = idea;
    }
}

std::string Brain::getIdea(int i)
{
    return (ideas[i]);
}

Brain::Brain(const Brain& other) 
{
    std::cout << "copy constructor Brain" << std::endl;
    for (int i = 0; i < 100; i++) 
    {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++) 
    {
        ideas[i] = other.ideas[i];
    }
    return *this; 
}