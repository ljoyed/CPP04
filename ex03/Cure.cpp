/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:12:46 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/15 18:26:53 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
    std::cout << type << "'s default constructor called." << std::endl;
}

Cure::Cure(const Cure &obj)
{
    type = obj.type;
    std::cout << type << "'s copy constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << "'s copy assignment operator called." << std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout << type << "'s destructor called." << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure();
    return (cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
 