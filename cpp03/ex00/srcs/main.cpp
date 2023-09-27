#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct("masahito");
	ClapTrap cp = ct;
	ClapTrap ce(ct);
	ct.getInfo();
}
