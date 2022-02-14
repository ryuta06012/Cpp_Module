/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:00:19 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/14 11:56:05 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define NC "\e[0m"
#define RED "\e[0;31m"

int main() {
	std::cout << GRN << "---------START_TEST1-------" << NC << std::endl;
	try
	{
		Form formA("formA", 150, -11);
        std::cout << formA << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GRN << "---------END_TEST1-------" << NC << std::endl;
	std::cout << GRN << "---------START_TEST2-------" << NC << std::endl;
	try
	{
		Form formA("formA", 151, 1);
        std::cout << formA << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GRN << "---------END_TEST2-------" << NC << std::endl;
	std::cout << GRN << "---------START_TEST3-------" << NC << std::endl;
	try
	{
		Form formA("formA", 150, 1);
        std::cout << formA << std::endl;
		Bureaucrat test1("test1", 149);
		test1.signForm(formA);
		test1.decGrade();
		test1.decGrade();
		test1.signForm(formA);
		std::cout << test1 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GRN << "---------END_TEST3-------" << NC << std::endl;
	std::cout << GRN << "---------START_TEST4-------" << NC << std::endl;
	try
	{
		Form formA("formA", 150, 1);
        std::cout << formA << std::endl;
		Bureaucrat test1("test1", 1);
		test1.signForm(formA);
		test1.decGrade();
		test1.decGrade();
		test1.signForm(formA);
		std::cout << test1 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GRN << "---------END_TEST4-------" << NC << std::endl;
	std::cout << GRN << "---------START_TEST5-------" << NC << std::endl;
	try
	{
		Form formA("formA", 151, 1);
        std::cout << formA << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GRN << "---------END_TEST5-------" << NC << std::endl;
	/*try
	{
		Bureaucrat a("a", 3);
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	} */
}
