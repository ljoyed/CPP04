/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:10:01 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:40:41 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << type << "'s default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    type = obj.type;
    std::cout << type << "'s copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    
    if (this != &obj)
    {
        type = obj.type;
    }
    std::cout << type << "'s copy assignment operator called." << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << type << "'s destructor called." << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "I'm a " << type << " and I go purrrrr purrrr..." << std::endl;
}
