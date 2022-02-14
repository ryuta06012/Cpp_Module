/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:50:27 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/14 10:12:44 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <exception>
#include <ostream>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		//int _grade;
		const int _max_grade;
		const int _min_grade;
		const std::string _name;
		const int _grade_sign;
		const int _grade_exec;
		bool _is_sign;
		
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
		Form();
		Form(const std::string name, const int grade_sign, const int grade_exec);
		~Form();
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getIssign() const;
		void beSigned(Bureaucrat &b);
		
};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif
