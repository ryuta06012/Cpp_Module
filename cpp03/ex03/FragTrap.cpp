/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:33 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/31 16:33:45 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_Name = "NONAME";
    _Hitpoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
	std::cout << "FragTrap " << RED << this->_Name << NC << " Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	_Name = name;
     _Hitpoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
	std::cout << "FragTrap " << RED << this->_Name << NC << " Constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << RED << this->_Name << NC << " destructor called" << std::endl;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << RED << this->_Name << NC << " attack " << target << ", causing "
	<< this->_AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << RED << this->_Name << NC << "request a positive high fives" << std::endl;
}