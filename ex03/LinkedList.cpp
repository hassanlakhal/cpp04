/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:22:46 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/05 02:05:42 by hlakhal-         ###   ########.fr       */
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

Node& LinkedList::getHead() const
{
    return *head;
}

void LinkedList::setHead(Node *set)
{
    head = set;
}