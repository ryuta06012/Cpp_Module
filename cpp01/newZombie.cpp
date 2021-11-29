/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:02:11 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/29 19:02:23 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *nz;

	nz = new (std::nothrow)Zombie(name);
	if (nz == NULL)
	{
		std::cerr << "failed!!" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (nz);
}