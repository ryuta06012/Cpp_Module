/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:39:15 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 16:15:48 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern Constructor called" << std::endl;
	f[0] = &Intern::ClassNon;
	f[1] = &Intern::getPresidentialPardonForm;
	f[2] = &Intern::getRobotomyRequestForm;
	f[3] = &Intern::getShrubberyCreationForm;
}

Intern::~Intern() {}

Form *Intern::ClassNon(const std::string &target) {
	(void)target;
	std::cout << "The requested form has no match." << std::endl;
	return 0;
}

Form *Intern::getPresidentialPardonForm(const std::string &target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::getRobotomyRequestForm(const std::string &target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::getShrubberyCreationForm(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(const std::string &type, const std::string &target) {
	int id;

	id = ((type == "presidential request") * 1) + ((type == "robotomy request") * 2) + ((type == "shrubbery request") * 3);
	return (this->*f[id])(target);
}