/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:59:35 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/15 16:14:44 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, "default") {
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45, target) {
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Destrctor called" << std::endl;
}

void	RobotomyRequestForm::action() const {
	std::cout << "wheeee!" << std::endl;

	 srand((unsigned)time(NULL));
	 if (rand() % 2 == 0) {
		 std::cout << "<" << getTarget() << ">" << "has been robotomized successfully" 
		 << std::endl;
	 }
	 else {
		 std::cout << "<" << getTarget() << ">" << "has been robotomized FAIL" 
		 << std::endl;
	 }
}

