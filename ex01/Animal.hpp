/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:38:07 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:37:27 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &obj);
    Animal &operator=(const Animal &obj);
    virtual ~Animal();
    
    virtual void makeSound(void) const;
    std::string getType(void) const;
};

#endif