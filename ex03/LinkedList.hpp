/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:22:42 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/04 03:11:51 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include"Node.hpp"

class LinkedList
{
    private:
        Node *head;
    public:
        LinkedList();
        ~LinkedList();
        void insertNode(void *data);
        const Node& getHead(void) const;
};

#endif


