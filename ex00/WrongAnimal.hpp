/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:02:17 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 15:36:34 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator=(const WrongAnimal &obj);
    virtual ~WrongAnimal();
    
    void makeSound(void) const;
    std::string getType(void) const;
};

#endif