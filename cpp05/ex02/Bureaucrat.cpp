/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:31:28 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/15 16:18:32 by hryuuta          ###   ########.fr       */
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
	if (num < _max_grade)
		throw GradeTooHighException("<Constructor> Higher than max grade");
	if (num > _min_grade)
		throw GradeTooLowException("<Constructor> Lower than min grade");
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

void Bureaucrat::signForm(Form &f) {
	if (f.getIssign()) {
		std::cout << this->getName() <<" already signs " << f.getName() << std::endl;
		return ;
	}
	try {
		f.beSigned(*this);
		std::cout << "<" << _name << ">" << "signs" << "<" << f.getName() << ">" << std::endl; 
	} catch (std::out_of_range &e) {
		std::cout << "<" << _name << ">" << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) {
	try
	{
		form.execute(*this);
		std::cout << "<" << _name << ">" << "executes " << "<" << form.getName() << ">" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {
	os << "name = " << b.getName() << " : grade = "<< b.getGrade() << std::endl;
	return os;
}
