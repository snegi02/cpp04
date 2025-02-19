/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:25:31 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:25:32 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "string"
#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif
