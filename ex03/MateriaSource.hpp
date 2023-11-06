/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:24:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/06 07:00:29 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *slots[4];
    static int ind;
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


