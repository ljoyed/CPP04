/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/19 10:04:13 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void more_tests(void)
{
    Character character("Alice");
    Ice iceMateria;
    Cure cureMateria;

    // Equip Materia to the character
    character.equip(&iceMateria);
    character.equip(&cureMateria);

    // Use Materias
    character.use(0, character); // Use Ice Materia
    character.use(1, character); // Use Cure Materia

    character.unequip(0); // Unequip a Materia

    // character.use(0, character); //Attempt to use the unequipped Materia Should do nothing

    Character bob("Bob");
    Character eve("Eve");

    bob.equip(&iceMateria);
    eve.equip(&cureMateria);

    // Use Materias with different characters
    bob.use(0, eve);
    eve.use(0, bob);

    // Unequip and use unequipped Materia
    bob.unequip(0);
    bob.use(0, eve); // Should do nothing
}
void subject_tests()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

int main(void)
{
    subject_tests();
    more_tests();
    return 0;
}
