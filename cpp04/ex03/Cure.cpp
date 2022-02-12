/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:00:44 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/12 12:13:39 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
//	std::cout << "Cure constructor called" << std::endl;
	_type = "cure";
}

Cure::~Cure() {
//	std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(Cure const &other) {
	*this = other;
}

AMateria	*Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << GRN <<  "* heals " << target.getName() << " wounds *"<< NC << std::endl;
}