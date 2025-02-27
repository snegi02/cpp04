/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:31:46 by snegi             #+#    #+#             */
/*   Updated: 2024/08/28 10:31:47 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
    for (int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = "ideas";
    }
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain copied." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
        std::cout << "Brain assigned." << std::endl;
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destroyed." << std::endl;
}