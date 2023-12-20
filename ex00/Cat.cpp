/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:48:59 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:36:04 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << type << "'s default constructor called." << std::endl;
}

Cat::Cat(const Cat &obj)
{
    type = obj.type;
    std::cout << type << "'s copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
    
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << "'s copy assignment operator called." << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << type << "'s destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "I'm a " << type << " and I go meow meow..." << std::endl;
}
