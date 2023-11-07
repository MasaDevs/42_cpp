#include "FlagTrap.hpp"
#include <iostream>

int main()
{
	FlagTrap masahito("masahito");
	FlagTrap masahitocp = masahito;
	FlagTrap masahitoref(masahito);

	std::cout << "----------------ATTACK-----------------" << std::endl;
	for (int i = 0; i < 102; i++)
		masahito.attack("arai");
	masahito.getInfo();
	std::cout << std::endl;
	std::cout << "----------------BEREPAIRED-----------------" << std::endl;
	for (int i = 0; i < 102; i++)
		masahitocp.beRepaired(10);
	masahitocp.getInfo();
	std::cout << std::endl;
	std::cout << "----------------TAKEDAMAGE-----------------" << std::endl;
	for (int i = 0; i < 102; i++)
		masahitoref.takeDamage(1);
	masahitoref.getInfo();
	std::cout << std::endl;
}
