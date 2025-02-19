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

Animal::~Animal() 
{
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}

void Animal::makeSound() const 
{
    std::cout << "Animal sound" << std::endl;
}
