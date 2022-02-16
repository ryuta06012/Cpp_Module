/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:59:41 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/16 11:39:42 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137, "default") {
	//std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137, target) {
	//std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	//std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::action() const {
	std::ofstream ofs(getTarget() + "_shrubbery");
	 if (!ofs) {
        std::cerr << "file open failed" << std::endl;
        std::exit(1);
    }
	ofs << "       oxoxoo    ooxoo\n"
  <<"     ooxoxo oo  oxoxoooo\n"
 <<"     oooo xxoxoo ooo ooox\n"
 <<"     oxo o oxoxo  xoxxoxo\n"
  <<"      oxo xooxoooo o ooo\n"
    <<"         ooo\\oo\\  /o/o\n"
      << "            \\  \\/ /\n"
       <<"            |    |\n"
        << "             |  |\n"
         <<"             | D|\n"
        <<"             |  |\n"
        <<"             |  |\n"
  <<"      ______/____\\____\n";
  ofs.close();
}