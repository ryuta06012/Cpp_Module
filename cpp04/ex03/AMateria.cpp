/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:11:02 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/12 12:13:19 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("default") {
	//std::cout << "AMateria Constructor clalled" << std::endl;
}

AMateria::AMateria(std::string type): _type(type) {
	//std::cout << "AMateria Constructor clalled" << std::endl;
}

AMateria::~AMateria() {
	//std::cout << "AMateria Destructor clalled" << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
	//std::cout << "AMateria Copy Constructor clalled" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	//std::cout << "AMateria Operator clalled" << std::endl;
	this->_type = other.getType();
	return *this;
}

std::string const &AMateria::getType() const {
	return _type;
};

void AMateria::use(ICharacter& target) {
	if (_type == "ice")
		std::cout << RED << "* shoots an ice bolt at" << NC << target.getName() << "*" << std::endl;
	else if (_type == "cure")
		std::cout << RED <<"* heals" << target.getName() << "wounds *" << NC << std::endl;
	else
		std::cout << RED << "nothing" << NC << std::endl;
}