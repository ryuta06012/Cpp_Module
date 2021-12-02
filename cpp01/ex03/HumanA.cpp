/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:09:27 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/02 15:31:53 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string weapon): _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << _name << " " << "attacks with his" << " " << this->_weapon.getType() <<  std::endl;
}

void	HumanA::setType(std::string newType)
{
	this->_weapon.setType(newType);
}