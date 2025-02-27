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
    brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copied." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
        std::cout << "Dog assigned." << std::endl;
    }
    return *this;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof!" << std::endl;
}