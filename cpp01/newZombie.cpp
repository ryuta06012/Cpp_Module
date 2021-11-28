#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *newZombie;

	newZombie = new (std::nothrow)Zombie;
	if (newZombie == NULL)
	{
		std::cerr << "failed!!" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	newZombie->_ZombieName = name;
	return (newZombie);
}