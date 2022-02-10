/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:02:30 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/29 19:38:22 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string _ZombieName;
};

void	randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif