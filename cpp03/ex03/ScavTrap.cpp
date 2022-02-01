/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:48:13 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/31 14:35:03 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_Name = "NONAME";
    _Hitpoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
	std::cout << "ScavTrap " << RED << this->_Name << NC << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_Name = name;
    _Hitpoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
	std::cout << "ScavTrap " << RED << this->_Name << NC << " Constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << RED << this->_Name << NC << " destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << RED << this->_Name << NC << " attack " << target << ", causing "
	<< this->_AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << RED << this->_Name << NC 
	<< " has enterred in Gate keeper mode." << std::endl;
}

