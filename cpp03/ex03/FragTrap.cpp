/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:33 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 02:08:29 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): _DF_HitPoints(100), _DF_EnergyPoints(100), _DF_AttackDamage(30){
	_Name = "player";
    _Hitpoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
	std::cout << "FragTrap " << RED << _Name << NC << " Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): _DF_HitPoints(100), _DF_EnergyPoints(100), _DF_AttackDamage(30) {
	_Name = name;
     _Hitpoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
	std::cout << "FragTrap " << RED << this->_Name << NC << " Constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << RED << this->_Name << NC << " destructor called" << std::endl;
}

unsigned int FragTrap::getHitPoints() {return _DF_HitPoints;}
unsigned int FragTrap::getEnergyPoints() {return _DF_EnergyPoints;}
unsigned int FragTrap::getAttackDamage() {return _DF_AttackDamage;}

void FragTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << RED << this->_Name << NC << " attack " << target << ", causing "
	<< this->_AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << RED << this->_Name << NC << "request a positive high fives" << std::endl;
}