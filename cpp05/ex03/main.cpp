/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:00:19 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 16:22:16 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define NC "\e[0m"
#define RED "\e[0;31m"

int main() {
    std::cout << GRN << "---------START_TEST1-------" << NC << std::endl;
	try {
        Intern  someRandomIntern;
        Form*   rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Bureaucrat bureaucrat("bureaucrat", -150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << GRN << "---------END_TEST1-------" << NC << std::endl;
}
