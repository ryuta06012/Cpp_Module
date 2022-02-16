/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:39:15 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 15:11:43 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern Constructor called" << std::endl;
	f[0] = &Intern::getPresidentialPardonForm;
	f[1] = &Intern::getRobotomyRequestForm;
	f[2] = &Intern::getShrubberyCreationForm;
}

Intern::~Intern() {}

Form *Intern::getPresidentialPardonForm(const std::string &target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::getRobotomyRequestForm() {
	return new RobotomyRequestForm(target);
}

Form *Intern::getShrubberyCreationForm() {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(const std::string &type, const std::string &target) {
	int id;

	id = ((level == "DEBUG") * 1) + ((level == "ERROR") * 2) + ((level == "INFO") * 3) + ((level == "WARNING") * 4);
	return (this->*f[id])(target);
}