
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie zb;
	Zombie *test2;

	test2 = zb.newZombie(name);
	//test2->newZombie("hryuuta");
	std::cout << "aaaa" << std::endl;
	test2->announce();
	std::cout << "b" << std::endl;
	delete test2;
	std::cout << "c" << std::endl;
}