/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:24:40 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/16 11:39:02 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		AMateria	*_leftOver[4];

	public:
		Character();
		Character(std::string name);
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		~Character();
        
		std::string	const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif