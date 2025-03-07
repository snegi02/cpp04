/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:39:23 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:39:25 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character:: Character(const std::string& name) : name(name)
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
}

Character:: Character(const Character& other) : name(other.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    if(this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            if(other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
    }
    for (std::vector<AMateria*>::iterator it = _unequippedMateria.begin(); it != _unequippedMateria.end(); ++it)
    {
        delete *it;
    }
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if(!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if(!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
    {
        _unequippedMateria.push_back(inventory[idx]);
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4 && inventory[idx])
    {
        inventory[idx]->use(target);
    }
}