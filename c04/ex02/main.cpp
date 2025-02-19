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
    const int animalCount = 4; // Adjust as needed
    Animal* animals[animalCount];
    
    for (int i = 0; i < animalCount / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = animalCount / 2; i < animalCount; ++i) {
        animals[i] = new Cat();
    }

    // Make all animals make a sound
    for (int i = 0; i < animalCount; ++i) {
        animals[i]->makeSound();
    }

    // Delete all animals and observe the destructor calls
    for (int i = 0; i < animalCount; ++i) {
        delete animals[i];
    }
    return 0;
}
