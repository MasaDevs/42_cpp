#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap masahito("masahito");
	ClapTrap masahitocp = masahito;
	ClapTrap masahitoref(masahito);

	std::cout << "----------------ATTACK-----------------" << std::endl;
	for (int i = 0; i < 12; i++)
		masahito.attack("arai");
	std::cout << std::endl;
	masahito.getInfo();
	std::cout << std::endl;
	std::cout << "----------------BEREPAIRED-----------------" << std::endl;
	for (int i = 0; i < 12; i++)
		masahitocp.beRepaired(10);
	std::cout << std::endl;
	masahitocp.getInfo();
	std::cout << std::endl;
	std::cout << "----------------TAKEDAMAGE-----------------" << std::endl;
	for (int i = 0; i < 12; i++)
		masahitoref.takeDamage(1);
	std::cout << std::endl;
	masahitoref.getInfo();
	std::cout << std::endl;
}
