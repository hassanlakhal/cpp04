/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:24:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/30 19:51:56 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *inventory[4]; 
public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


