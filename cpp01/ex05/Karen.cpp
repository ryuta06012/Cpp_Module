/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 05:44:43 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/11 16:55:57 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	f[0] = &Karen::_non;
	f[1] = &Karen::_debug;
	f[2] = &Karen::_error;
	f[3] = &Karen::_info;
	f[4] = &Karen::_warning;
}

Karen::~Karen(){}

void	Karen::_non(void)
{
	std::cout << "out of level" << std::endl;
}
void	Karen::_debug(void)
{
	std::cout << "I love to get extra bacon"
				<< "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I just love it!" 
				<< std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra"
				<< "bacon cost more money. You don’t put enough! If you did I would not have to ask"
				<< "for it!" 
				<< std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
				<< "coming here for years and you just started working here last month." 
				<< std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." 
	<< std::endl;
}

void	Karen::complain(std::string level)
{
	int i = ((level == "DEBUG") * 1) + ((level == "ERROR") * 2) + ((level == "INFO") * 3) + ((level == "WARNING") * 4);
	(this->*f[i])();
	std::cout << i << std::endl;
}
