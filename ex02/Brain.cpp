/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:44:39 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/28 22:31:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
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
    for (int i = 0; i < 100; i++) 
    {
        ideas[i] = other.ideas[i];
    }
}