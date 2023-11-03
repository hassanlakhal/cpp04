/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:27:02 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/03 18:39:13 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ICharacter.hpp"
class ICharacter;
class Character: public ICharacter
{
private:
    std::string name;
    AMateria *inventory[4];
    AMateria *inventoryDelete[4];
    static int ind;
    static AMateria *invDelete[];
public:
    Character();
    Character(const std::string& name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};