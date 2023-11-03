/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:02:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/02 20:22:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

class Cure:public AMateria
{
    private:
    
    public:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        void setType(std::string& type);
        const std::string& getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};


