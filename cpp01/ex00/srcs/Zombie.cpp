#include "Zombie.hpp"
#include <iostream>
#include <string>

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie	*z = new Zombie(name);
	return (z);
}

void	randomChump(std::string name)
{
	Zombie	*z = newZombie(name);
	
	z->announce();
	delete (z);
}
