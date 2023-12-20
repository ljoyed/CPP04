/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:56:15 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:38:20 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    this->brain = new Brain();
    std::cout << type << "'s default constructor called." << std::endl;
}

Dog::Dog(const Dog &obj)
{
    type = obj.type;
    this->brain = new Brain(*obj.brain);
    std::cout << type << "'s copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
    
    if (this != &obj)
    {
        type = obj.type;
        this->brain = new Brain(*obj.brain);
    }
    std::cout << type << "'s copy assignment operator called." << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << type << "'s destructor called." << std::endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    std::cout << "I'm a " << type << " and I go woof woof..." << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return (brain);
}
