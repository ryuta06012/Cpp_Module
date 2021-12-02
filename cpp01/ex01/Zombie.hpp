/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:15:50 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/01 19:53:14 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	nameSet(std::string name);
	private:
		std::string _ZombieName;
};

Zombie *ZombieHorde( int N, std::string name);
#endif
