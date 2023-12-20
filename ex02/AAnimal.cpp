/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:38:24 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:39:20 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown")
{
    std::cout << "AAnimal " << type << "'s default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
    type = obj.type;
    std::cout << type << " type of aanimals' copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &obj)
{
    
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << " type of aanimals' copy assignment operator called." << std::endl;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor called for AAnimal of type: " << type << std::endl;
}

void AAnimal::makeSound(void) const
{
    std::cout << "I'm an " << type << " type of aanimal and my sound is undefined..." << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (type);
}