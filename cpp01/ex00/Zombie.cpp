/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:02:21 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/29 19:02:21 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"

Zombie::Zombie(std::string name): _ZombieName("")
{
	_ZombieName = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_ZombieName << ">" << "\t" << "died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_ZombieName << ">" << "\t" << "BraiiiiinnnzzzZ..." << std::endl;
}