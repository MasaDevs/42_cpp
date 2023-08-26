#include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct("masahito");
	FlagTrap ft("yoda");
	ct.get_info();
	ft.get_info();
}
