#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie	z("masasasa");
	Zombie	*zom = newZombie("hello");
	randomChump("masahito");
	z.announce();
	zom->announce();
	delete zom;
	return (0);
}
