/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materiasource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:26:37 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/15 18:05:12 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_memory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator=(const MateriaSource &obj);
		~MateriaSource();
        
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif