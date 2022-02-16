/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:50:31 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 11:40:15 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(const std::string errStr): std::out_of_range(errStr) {}

Form::GradeTooLowException::GradeTooLowException(const std::string errStr): std::out_of_range(errStr) {}

Form::SignIsNotException::SignIsNotException(const std::string errStr): std::out_of_range(errStr) {}

Form::Form(): _max_grade(1), _min_grade(150), _name("default"), _target("default"), _grade_sign(1), _grade_exec(1), _is_sign(false) {
	//std::cout << "Form Constructor called " << std::endl;
}

Form::Form(const std::string name, const int grade_sign, const int grade_exec, const std::string &target)
 :_max_grade(1), _min_grade(150), _name(name), _target(target), _grade_sign(grade_sign), _grade_exec(grade_exec), _is_sign(false) {
	std::cout << "Form Constructor called " << std::endl;
	if (grade_sign < _max_grade || grade_exec < _max_grade)
		throw GradeTooLowException("<Constructor> Higher than standard Grade");
	if (grade_sign > _min_grade || grade_exec > _min_grade)
		throw GradeTooLowException("<Constructor> Lower than standard Grade");
}

Form::~Form() {
	//std::cout << "Form Desstructor called" << std::endl;
}

std::string Form::getName() const {
	return _name;
}

std::string Form::getTarget() const {
	return _target;
}

int Form::getGradeSign() const {
	return _grade_sign;
}

int Form::getGradeExec() const {
	return _grade_exec;
}

bool Form::getIssign() const {
	return _is_sign;
}

void Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() > _grade_sign) {
        throw GradeTooLowException("Lower than standard Grade");
    }
    _is_sign = true;
}

void Form::execute(Bureaucrat const &executor) const {
	if (!getIssign())
		throw SignIsNotException("<execute> Not signed");
	if (executor.getGrade() > _grade_exec)
		throw GradeTooLowException("<execute> Lower than standard Grade");
	action();
}

std::ostream &operator<<(std::ostream &os, Form &f) {
	os << "name = " << f.getName() << " : grade_sign = "<< f.getGradeSign()
	<< " : grade_exec = " << f.getGradeExec();
	os << " : is_sign = ";
	if (f.getIssign())
		os << "true";
	else
		os << "false";
	os << std::endl;

	return os;
}