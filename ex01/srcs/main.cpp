#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct("masahito");
	ScavTrap st("serena");
	std::cout << "this is my age" << std::endl;
	ct.getInfo();
	ct.attack("yoda");
	for (int i = 0; i < 10; i++)
		ct.attack("yoda");
	st.getInfo();
	st.attack("yoda");
}
