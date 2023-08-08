#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie() {this->name = "default";}
		Zombie(std::string name) {this->name = name;}
		void	announce(void) const;
	private:
		std::string name;
};

Zombie	*newZombie(std::string name);


void	randomChump(std::string name);
#endif
