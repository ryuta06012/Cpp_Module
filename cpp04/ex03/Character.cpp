/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 06:06:49 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/12 12:13:05 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	//std::cout << "Character Constructor called" << std::endl;
	_name = "";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) {
	//std::cout << name <<" Character Constructor called" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	//std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

void	Character::equip(AMateria *m) {
	if (m != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] == m)
				return ;
			if (_inventory[i] == NULL)
			{
				_inventory[i] = m;
				return ;
			}
		}
	}
}

void	Character::unequip(int idx) {
	if (_inventory[idx] == NULL)
		return ;
}

std::string const &Character::getName() const {
	return _name;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx] != NULL && (idx >= 0 && idx <= 3))
		_inventory[idx]->use(target);
}


