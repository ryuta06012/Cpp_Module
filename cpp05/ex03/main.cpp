/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:00:19 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/15 16:18:49 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define NC "\e[0m"
#define RED "\e[0;31m"

int main() {
    std::cout << GRN << "---------START_TEST1-------" << NC << std::endl;
	try {
        ShrubberyCreationForm sformA("home");
        Bureaucrat bureaucrat("bureaucrat", 2);
        std::cout << sformA << std::endl;
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(sformA);
        bureaucrat.executeForm(sformA);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << GRN << "---------END_TEST1-------" << NC << std::endl;
    std::cout << GRN << "---------START_TEST2-------" << NC << std::endl;
	try {
        RobotomyRequestForm sformA("home");
        Bureaucrat bureaucrat("bureaucrat", 2);
        std::cout << sformA << std::endl;
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(sformA);
        bureaucrat.executeForm(sformA);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << GRN << "---------END_TEST2-------" << NC << std::endl;
    std::cout << GRN << "---------START_TEST3-------" << NC << std::endl;
	try {
        PresidentialPardonForm sformA("home");
        Bureaucrat bureaucrat("bureaucrat", 2);
        std::cout << sformA << std::endl;
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(sformA);
        bureaucrat.executeForm(sformA);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << GRN << "---------END_TEST3-------" << NC << std::endl;
	//ShrubberyCreationForm sformA("home");
    
}
