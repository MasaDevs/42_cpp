#include "FlagTrap.hpp"
#include <iostream>
#include <string>

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	std::cout << "FlagTrap constructor" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamages(30);
	return ;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap Destructor" << std::endl;
	return ;
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
	return ;
}
