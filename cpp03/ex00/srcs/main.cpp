#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct("masahito");
	std::cout << "this is my age" << std::endl;
	ct.get_info();
	ct.attack("yoda");
}
