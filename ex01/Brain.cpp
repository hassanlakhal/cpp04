/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:44:39 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 16:25:16 by hlakhal-         ###   ########.fr       */
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