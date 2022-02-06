#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		void attack(std::string const & target);
		void whoAmI();
};

#endif
