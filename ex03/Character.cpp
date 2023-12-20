/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:59:40 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/16 13:22:53 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    _name = "Anonymous";
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
        _leftOver[i] = NULL;
    }
}

Character::Character(std::string name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
        _leftOver[i] = NULL;
    }
}

Character::Character(const Character &obj)
{
    _name = obj._name;
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i]; // new line
        if (obj._inventory[i] != NULL)
            _inventory[i] = obj._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}
Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
       _name = obj._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i]; // new line
            if (obj._inventory[i] != NULL)
                _inventory[i] = obj._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        } 
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
        {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
        if (_leftOver[i] != NULL)
        {
            delete _leftOver[i];
            _leftOver[i] = NULL;
        }
    } 
}

std::string	const &Character::getName() const
{
    return (_name);
}

void	Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m->clone();
            break;
        }
    }
}

void	Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        if(_inventory[idx] == NULL)
            return;
        _leftOver[idx] = _inventory[idx];
        _inventory[idx] = NULL;
    }
}

void	Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
    {
        if(_inventory[idx] == NULL)
            return;
        _inventory[idx]->use(target);
    }
}