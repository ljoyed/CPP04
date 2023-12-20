/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:54:48 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:40:00 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();
    
    void makeSound(void) const;
    Brain *getBrain(void) const;
};

#endif