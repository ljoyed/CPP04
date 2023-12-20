/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:27:05 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/15 18:27:15 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
    std::cout << type << "'s default constructor called." << std::endl;
}

Ice::Ice(const Ice &obj)
{
    type = obj.type;
    std::cout << type << "'s copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << "'s copy assignment operator called." << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << type << "'s destructor called." << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *ice = new Ice();
    return (ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
