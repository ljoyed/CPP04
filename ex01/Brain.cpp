/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:23:32 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:37:50 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "new idea";
    std::cout << "New brain created using the default constructor." << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
    std::cout << "New brain created using the copy constructor." << std::endl;
}

Brain& Brain::operator=(const Brain &obj)
{
    
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    std::cout << "New brain created using the copy assignment operator." << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain's destructor called." << std::endl;
}

std::string Brain::getIdea(int i) const
{
    return ideas[i];
}
