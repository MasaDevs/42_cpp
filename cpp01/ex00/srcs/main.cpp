#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie	z("masahiot arai");
	Zombie	*zom = newZombie("hello");
	randomChump("ayato arai");
	z.announce();
	zom->announce();
	delete zom;
	return (0);
}
