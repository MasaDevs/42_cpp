#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scav Constructor" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamages(20);
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const  &target)
{
	if (!getIsAlive())
	{
		std::cout << "ScavTrap " << getName() << " can't attack " << target << ". Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamages() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
	if(getHitPoints() <= 0 || getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " died!" << std::endl;
		setIsAlive(false);
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	return ;
}
	
