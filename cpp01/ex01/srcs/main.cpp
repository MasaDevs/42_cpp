#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie *z = zombieHorde(10, "arai");
	randomChump("masahito");

	for(int i = 0; i < 10; i++)
		z[i].announce();
	delete[] z;
	return (0);
}
