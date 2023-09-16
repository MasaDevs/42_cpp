#include "Zombie.hpp"
#include <iostream>
#include <string>

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
	return ;
}
