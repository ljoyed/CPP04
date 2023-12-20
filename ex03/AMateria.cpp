/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:09:58 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/15 18:25:23 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "undefined";
}

AMateria::AMateria(std::string const &t)
{
    type = t;
}
        
AMateria::AMateria(const AMateria &obj)
{
    type = obj.type;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}

AMateria::~AMateria()
{}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << type << " materia used on " << target.getName() << ". Effect unknown!" << std::endl;
}