/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:27:27 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:27:29 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
    type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copied." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        WrongAnimal::operator=(other);
        std::cout << "WrongCat assigned." << std::endl;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "Meow?" << std::endl;
}