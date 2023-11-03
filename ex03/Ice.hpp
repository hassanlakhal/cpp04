/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:12 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/02 20:28:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

class Ice:public AMateria
{
private:
    
public:
    Ice();
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);
    void setType(const std::string& type);
    const std::string& getTypeIce() const;
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};


