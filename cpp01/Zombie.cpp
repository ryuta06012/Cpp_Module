#include "Zombie.hpp"

Zombie::Zombie(): _ZombieName("42tokyo")
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_ZombieName << ">" << "\t" << "died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_ZombieName << ">" << "\t" << "BraiiiiinnnzzzZ..." << std::endl;
}