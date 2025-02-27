/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:26:34 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:26:35 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    Animal a;
    const int animalCount = 2;
    Animal* animals[animalCount];
    for (int i = 0; i < animalCount / 2; ++i)
        animals[i] = new Dog();
    for (int i = animalCount / 2; i < animalCount; ++i)
        animals[i] = new Cat();
    for (int i = 0; i < animalCount; ++i)
        animals[i]->makeSound();
    // delete animals[0];
    // animals[0] = new Cat(*static_cast<Cat*>(animals[1])); 
    for (int i = 0; i < animalCount; ++i)
        animals[i]->makeSound();
    for (int i = 0; i < animalCount; ++i)
        delete animals[i];
    return 0;
}