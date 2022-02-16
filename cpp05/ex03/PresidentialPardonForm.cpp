/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:59:31 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 11:39:24 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential", 25, 5, "default") {
	//std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form("Presidential", 25, 5, target) {
	//std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::action() const {
    std::cout << "<" << getTarget() << "> "
              << "has been pardoned by Zafod Beeblebrox" << std::endl;
}
