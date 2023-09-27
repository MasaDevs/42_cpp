#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Scav Constructor" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string name)
{
	std::cout << "Scav Attack" << name << std::endl;
	ClapTrap::attack(name);
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	return ;
}
	
