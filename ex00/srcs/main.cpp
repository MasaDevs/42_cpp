#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap masahito("masahito");
	ClapTrap masahitocp = masahito;
	ClapTrap masahitococonst(masahito);
	masahito.getInfo();
	masahito.attack("tanake");
}
