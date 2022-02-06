/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:48:57 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 02:12:46 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	{
		std::cout << GRN << "------------ScavTrap TEST START-----------" << NC << std::endl;
		ScavTrap test;
		ScavTrap test1("test1");
		
		test.attack("handa");
		test.takeDamage(2);
		test.beRepaired(10);
		test.takeDamage(2);
		test.guardGate();
		test1.attack("handa");
		test1.takeDamage(2);
		test1.beRepaired(10);
		test1.takeDamage(2);
		test1.guardGate();
	}
	std::cout << GRN << "------------ScavTrap TEST END-----------" << NC << std::endl;
	std::cout << CYN << "------------ClapTrap TEST START-----------" << NC << std::endl;
	{
		ClapTrap a;
		ClapTrap b("hryuuta");

		a.attack("handa");
		a.beRepaired(20);
		a.takeDamage(20);
		b.attack("handa");
		b.beRepaired(20);
		b.takeDamage(20);
	}
	std::cout << CYN << "-----------ClapTrap TEST END-----------" << NC << std::endl;
	std::cout << CYN << "------------FragTrap TEST START-----------" << NC << std::endl;
	{
		FragTrap a;
		FragTrap b("hryuuta");

		a.attack("handa");
		a.beRepaired(20);
		a.takeDamage(20);
		b.attack("handa");
		b.beRepaired(20);
		b.takeDamage(20);
	}
	std::cout << CYN << "-----------FragTrap TEST END-----------" << NC << std::endl;
	std::cout << CYN << "------------DiamondTrap TEST START-----------" << NC << std::endl;
	{
		DiamondTrap a("hryuuta");

		a.whoAmI();
		a.attack("ataaaaaack!!!");
        a.takeDamage(80);
        a.takeDamage(50);
        a.beRepaired(30);
	}
	std::cout << CYN << "-----------DiamondTrap TEST END-----------" << NC << std::endl;
}