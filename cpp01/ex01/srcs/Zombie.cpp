#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() : name("default")
{
	std::cout << "Zombie Constructor" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie Constructor" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie Destructor" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

