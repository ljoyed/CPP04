/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/19 10:16:33 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    Animal a;
    a.makeSound();
    
    Animal *arr[4];
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
