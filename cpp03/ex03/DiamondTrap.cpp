/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:15:12 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 02:09:07 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): _Name("DFplayer") {
	std::cout << "DiamondTrap " << " Constructor called" << std::endl;
	ClapTrap::setName(_Name + "_clap_name");
	_Hitpoints = FragTrap::getHitPoints();
	_EnergyPoints = ScavTrap::getEnergyPoints();
	_AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name):_Name(name) {
	std::cout << "DiamondTrap " << " Constructor called" << std::endl;
	ClapTrap::setName(name + "_clap_name");
	_Hitpoints = FragTrap::getHitPoints();
	_EnergyPoints = ScavTrap::getEnergyPoints();
	_AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << "destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "clapTrap name " << ClapTrap::_Name << std::endl;
	std::cout << "DiamondTrap name " << _Name << std::endl;
}