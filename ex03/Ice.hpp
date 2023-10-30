/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:12 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/29 21:25:48 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

class Ice:public AMateria
{
private:
    
public:
    Ice();
    Ice(Ice& other);
    Ice& operator=(const Ice& other);
    void setType(const std::string& type);
    const std::string& getTypeIce() const;
    AMateria* clone() const;
    ~Ice();
};


