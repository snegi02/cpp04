/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:26:19 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:26:21 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof!" << std::endl;
}
