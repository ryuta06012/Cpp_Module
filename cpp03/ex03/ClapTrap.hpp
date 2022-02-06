/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:50:02 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 01:21:28 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define NC "\e[0m"
#define RED "\e[0;31m"

class ClapTrap
{
protected:
	std::string _Name;
	unsigned int _Hitpoints;
	unsigned int _EnergyPoints;
	unsigned int _AttackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &r);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	void setName(std::string name);
};

#endif
