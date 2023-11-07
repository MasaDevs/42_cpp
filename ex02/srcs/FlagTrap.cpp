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
void	FlagTrap::attack(std::string const  &target)
{
	if (!getIsAlive())
	{
		std::cout << "FlagTrap " << getName() << " can't attack " << target << ". Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "FlagTrap " << getName() << " attacks " << target << ", causing " << getAttackDamages() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
	if(getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		std::cout << "FlagTrap " << getName() << " died!" << std::endl;
		setIsAlive(false);
	}
	return ;
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << "high fives" << std::endl;
	return ;
}
