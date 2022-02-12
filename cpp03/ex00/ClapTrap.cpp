/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:00:11 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/31 12:46:28 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("noname"), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap " << _Name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0) {
	_Name = name;
	std::cout << "ClapTrap " << _Name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _Name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &r) {
    this->_Name = r._Name;
    this->_Hitpoints = r._Hitpoints;
    this->_EnergyPoints = r._EnergyPoints;
    this->_AttackDamage = r._AttackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_Name << " attack " << target << ", causing "
	<< this->_AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_Name << " take ";
	if (this->_Hitpoints < amount) {
		this->_Hitpoints = 0;
		std::cout << amount << " points of damage!" << std::endl;
	}
	else {
		this->_Hitpoints -= amount;
		std::cout << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_Name << " is repaired " 
	<< amount << " points" << std::endl;
	this->_Hitpoints += amount;
}