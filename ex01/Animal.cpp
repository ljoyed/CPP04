/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:38:24 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:37:37 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
    std::cout << "Animal " << type << "'s default constructor called." << std::endl;
}

Animal::Animal(const Animal &obj)
{
    type = obj.type;
    std::cout << type << " type of animals' copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
    
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << " type of animals' copy assignment operator called." << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor called for Animal of type: " << type << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "I'm an " << type << " type of animal and my sound is undefined..." << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}