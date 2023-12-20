/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 12:38:39 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    //AAnimal a; //Not possible becuase AAnimal is an abstract class with atleast 1 pure virtual func.

    AAnimal *arr[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = new Dog();
            arr[i]->makeSound();
        }
        else
        {
            arr[i] = new Cat();
            arr[i]->makeSound();
        }
    }
    Cat c;
    Dog d;
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << ". In my cat's brain there's a " << c.getBrain()->getIdea(i) << std::endl;
        std::cout << i << ". In my dog's brain there's a " << d.getBrain()->getIdea(i) << std::endl;
    }
    for (int i = 0; i < 4; i++)
        delete arr[i];
    return 0;
}