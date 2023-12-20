/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:03:28 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:38:40 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown")
{
    std::cout << "WrongAnimal " << type << "'s default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    type = obj.type;
    std::cout << type << " type of WrongAnimals' copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << " type of WrongAnimals' copy assignment operator called." << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for WrongAnimal of type: " << type << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "I'm an " << type << " type of WrongAnimal and my sound is brrrr brrrr..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}