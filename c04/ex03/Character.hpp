/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:39:28 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:39:30 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        Character(const std::string& name);
        Character(const Character &other);
        Character& operator=(const Character &other);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx,ICharacter& target);
};
#endif
