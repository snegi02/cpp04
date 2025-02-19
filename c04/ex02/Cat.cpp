/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:25:55 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:25:57 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    type = "Cat";
    std::cout << "Cat created" << std::endl;
    brain = new Brain();
}

Cat::~Cat() 
{
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meow!" << std::endl;
}
