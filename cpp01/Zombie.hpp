#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
	private:
		std::string _ZombieName;
};

void	randomChump(std::string name);
#endif