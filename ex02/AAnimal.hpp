/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:38:07 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:39:09 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal &obj);
    AAnimal &operator=(const AAnimal &obj);
    virtual ~AAnimal();
    
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};

#endif