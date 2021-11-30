/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:15:41 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/30 16:06:29 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde( int N, std::string name)
{
	Zombie *zombies;
	zombies = new Zombie[N];

	for (int i=0; i<N; i++)
		zombies[i].nameSet(name);
	return (zombies);
}