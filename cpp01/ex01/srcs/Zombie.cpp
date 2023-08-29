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

Zombie	*newZombie(std::string name)
{
	Zombie	*z = new Zombie(name);
	return (z);
}

void	randomChump(std::string name)
{
	Zombie	*z = newZombie(name);
	
	z->announce();
	delete z;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z;

	z = new Zombie[N];
	for(int i = 0; i < N; i++)
		z[i].set_name(name);
	return (z);
}
