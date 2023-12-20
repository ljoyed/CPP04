/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:02:16 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/16 13:25:46 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        _memory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_memory[i]; // new line
        if (obj._memory[i] != NULL)
            _memory[i] = obj._memory[i]->clone();
        else
            _memory[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            delete this->_memory[i]; // new line
            if (obj._memory[i] != NULL)
                _memory[i] = obj._memory[i]->clone();
            else
                _memory[i] = NULL;
        } 
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete _memory[i];
        _memory[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
	{
		if (_memory[i] == NULL)
		{
			_memory[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
	{
        if (type.compare(_memory[i]->getType()) == 0)
        {
            return _memory[i];
        }
	}
	return 0;
}
