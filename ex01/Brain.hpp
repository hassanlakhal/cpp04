/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:44:34 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/27 21:38:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    void addIdeas(int index, std::string idea);
    std::string getIdea(int i)
    {
        return (ideas[i]);
    }
};

#endif


