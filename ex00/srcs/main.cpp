#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap masahito("masahito");
	ClapTrap masahitocp = masahito;
	ClapTrap masahitococonst(masahito);
	masahito.getInfo();
	masahito.attack("tanake");
	masahito.attack("tanake");
	masahito.beRepaired(10);
	masahito.takeDamage(10);
	masahito.beRepaired(10);
    masahitococonst.attack("tanaka");
}
