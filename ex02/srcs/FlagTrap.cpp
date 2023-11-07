#include "FlagTrap.hpp"
#include <iostream>
#include <string>

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	std::cout << "FlagTrap constructor" << std::endl;
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damages_ = 30;
	return ;
}

FlagTrap::FlagTrap(FlagTrap const &flagtrap) : ClapTrap(flagtrap)
{
	std::cout << "FlagTrap Copy Constructor" << std::endl;
	*(this) = flagtrap;
	return ;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap Destructor" << std::endl;
	return ;
}

FlagTrap	&FlagTrap::operator=(FlagTrap const &flagtrap)
{
	if (this != &flagtrap)
	{
		ClapTrap::operator=(flagtrap);
	}
	return (*this);
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
	return ;
}
