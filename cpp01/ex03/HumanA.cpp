/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:09:27 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/03 17:03:03 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << _name << " " << "attacks with his" << " " << this->_weapon.getType() <<  std::endl;
}

void	HumanA::setType(std::string newType)
{
	this->_weapon.setType(newType);
}