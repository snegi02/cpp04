/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:25:24 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:25:26 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal() : type("Animal")
{
    std::cout << "Animal created" << std::endl;
}
Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Animal copied." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
    {
        this->type = other.type;
        std::cout << "Animal assigned." << std::endl;
    }
        return *this;
}

Animal::~Animal() 
{
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}