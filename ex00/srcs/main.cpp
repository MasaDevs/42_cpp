#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap masahito("masahito");
	ClapTrap masahitocp = masahito;
	ClapTrap masahitoref(masahito);
	masahito.getInfo();
	std::cout << "---------------------ATTACK---------------------" << std::endl << std::endl;
	for (int i = 0; i < 12 ; i++)
	{
		masahitocp.attack("tanaka");
		masahitocp.getInfo();
		std::cout << std::endl;
	}
	std::cout << "---------------------REPAIR---------------------" << std::endl << std::endl;
	for (int i = 0; i < 12 ; i++)
	{
		masahito.beRepaired(10);
		masahito.getInfo();
		std::cout << std::endl;
	}
	std::cout << "---------------------takeDamage---------------------" << std::endl << std::endl;
	for (int i = 0; i < 12 ; i++)
	{
		masahitoref.takeDamage(1);
		masahitoref.getInfo();
		std::cout << std::endl;
	}
}
