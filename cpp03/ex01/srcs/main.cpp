#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct("masahito");
	ScavTrap st("serena");
	std::cout << "this is my age" << std::endl;
	ct.get_info();
	ct.attack("yoda");
	st.get_info();
	st.attack("yoda");
}
