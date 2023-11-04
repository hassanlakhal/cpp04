/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:22:46 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 03:23:00 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"LinkedList.hpp"


LinkedList::LinkedList()
{
    this->head = NULL;
}

LinkedList::~LinkedList()
{
}

void LinkedList::insertNode(void *newData)
{
    Node* newNode = new Node(newData);
    newNode->next = head;
    head = newNode; 
}

const Node& LinkedList::getHead() const
{
    return *head;
}