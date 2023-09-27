#include "FlagTrap.hpp"
#include <iostream>
#include <string>

FlagTrap::FlagTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FlagTrap constructor" << std::endl;
	return ;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap Destructor" << std::endl;
	return ;
}
