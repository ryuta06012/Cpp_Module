/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:20:06 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/02 13:46:05 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(const std::string weapon): _type(weapon){}

Weapon::~Weapon(){}

std::string const &Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}