/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:24:24 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/14 10:11:25 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <exception>
#include <ostream>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		int _grade;
		const int _max_grade;
		const int _min_grade;
		const std::string _name;
		class GradeTooHighException: public std::out_of_range
		{
			public:
				GradeTooHighException(const std::string errStr);
		};
		class GradeTooLowException : public std::out_of_range
		{
			public:
				GradeTooLowException(const std::string errStr);
   		};
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int num);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void decGrade();
		void incGrade();
		void signForm(Form &f);
		
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
