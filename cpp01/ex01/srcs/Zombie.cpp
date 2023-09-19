#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{
	std::cout << "this is Zombie Constructor" << std::endl;
	this->name = "default";
	return ;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "this is Zombie Constructor" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "this is Zombie Destructor" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

