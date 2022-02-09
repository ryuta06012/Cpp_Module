/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:11:02 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/09 05:04:40 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria Constructor clalled" << std::endl;
}

AMateria::Amateria(std::string const & type): _type(type) {
	std::cout << "AMateria Constructor clalled" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor clalled" << std::endl;
}

std::string const &AMateria::getType() const {
	return _type;
};

void AMateria::use(ICharacter& target) {
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
	else if (_type == "cure")
		std::cout << "* heals" << target.getName() << "wounds *" << std::endl;
	else
		std::cout << "nothing" << std::endl;
}