#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap masahito("masahito");
	ScavTrap masahitocp = masahito;
	ScavTrap masahitoref(masahito);

	std::cout << "----------------ATTACK-----------------" << std::endl;
	for (int i = 0; i < 52; i++)
		masahito.attack("arai");
	masahito.getInfo();
	std::cout << std::endl;
	std::cout << "----------------BEREPAIRED-----------------" << std::endl;
	for (int i = 0; i < 52; i++)
		masahitocp.beRepaired(10);
	masahitocp.getInfo();
	std::cout << std::endl;
	std::cout << "----------------TAKEDAMAGE-----------------" << std::endl;
	for (int i = 0; i < 12; i++)
		masahitoref.takeDamage(10);
	masahitoref.getInfo();
	std::cout << std::endl;
}
