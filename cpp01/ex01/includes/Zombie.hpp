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
		void	set_name(std::string name);
	private:
		std::string name;
};

Zombie	*zombieHorde(int N, std::string name);
#endif
