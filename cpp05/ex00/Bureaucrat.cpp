/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:31:28 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/13 13:49:06 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string errStr): std::out_of_range(errStr) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string errStr): std::out_of_range(errStr) {}

Bureaucrat::Bureaucrat(): _grade(1), _max_grade(1), _min_grade(150), _name("default") {
	std::cout << "Bureaucrat Constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int num): _max_grade(1), _min_grade(150), _name(name) {
	std::cout << "Bureaucrat Constructor called " << std::endl;
	
	_grade = num;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Desstructor called" << std::endl;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::decGrade() {
	if (_grade >= _min_grade)
		throw GradeTooLowException("out of range _min_grade!");
	_grade++;
}

void Bureaucrat::incGrade() {
	if (_grade <= _max_grade)
		throw GradeTooHighException("out of range _max_grade!");
	_grade--;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {
	os << "name = " << b.getName() << " : grade = "<< b.getGrade() << std::endl;
	return os;
}
