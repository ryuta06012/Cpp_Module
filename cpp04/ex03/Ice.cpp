/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:52:01 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/12 12:13:46 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	//std::cout << "Ice constructor called" << std::endl;
	_type = "ice";
}

Ice::~Ice() {
	//std::cout << "Ice Destructor" << std::endl;
}

Ice::Ice(Ice const &other) {
	*this = other;
}

AMateria	*Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << CYN <<"* shoots an ice bolt at " << target.getName() << " *"<< NC << std::endl;
}