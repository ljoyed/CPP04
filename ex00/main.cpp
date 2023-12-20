/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/14 11:14:53 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *d = new Dog();
    const Animal *c = new Cat();
    const WrongAnimal *w = new WrongCat();
    std::cout << "My animal type is : " << meta->getType() << std::endl;
    std::cout << "My animal type is : " << d->getType() << std::endl;
    std::cout << "My animal type is : " << c->getType() << std::endl;
    std::cout << "My animal type is : " << w->getType() << std::endl;
    meta->makeSound(); 
    d->makeSound();
    c->makeSound();
    w->makeSound();
    delete meta;
    delete d;
    delete c;
    delete w;
    return (0);
}
