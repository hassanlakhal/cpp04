/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:39:28 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 00:51:58 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    private:
        
    public:
        WrongCat();
        ~WrongCat();
        void makeSound() const ;
};