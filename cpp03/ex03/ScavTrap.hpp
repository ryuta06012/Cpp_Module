/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:48:08 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 02:07:40 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		unsigned int _DF_HitPoints;
		unsigned int _DF_EnergyPoints;
		unsigned int _DF_AttackDamage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(std::string const & target);
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		unsigned int getAttackDamage();
		void guardGate();
};

#endif
