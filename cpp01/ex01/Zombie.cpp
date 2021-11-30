/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:15:56 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/30 16:08:47 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _ZombieName("")
{
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

void	Zombie::nameSet(std::string name)
{
	_ZombieName = name;
}