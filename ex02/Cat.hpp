/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:47:15 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:39:47 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();
    
    void makeSound(void) const;
    Brain *getBrain(void) const;
};

#endif