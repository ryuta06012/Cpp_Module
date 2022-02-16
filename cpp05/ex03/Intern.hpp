/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:39:07 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 16:17:36 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form *ClassNon(const std::string &target);
	Form *getPresidentialPardonForm(const std::string &target);
	Form *getRobotomyRequestForm(const std::string &target);
	Form *getShrubberyCreationForm(const std::string &target);
	Form	*(Intern::*f[4])(const std::string &target);
public:
	Intern();
	~Intern();
	Form *makeForm(const std::string &type, const std::string &target);
};

#endif
