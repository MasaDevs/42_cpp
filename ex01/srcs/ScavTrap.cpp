#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scav Constructor" << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damages_ = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	*(this) = scavtrap;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Destructor" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scavtrap)
{
	if (this != &scavtrap)
	{
		ClapTrap::operator=(scavtrap);
	}
	return (*this);
}

void	ScavTrap::attack(std::string const  &target)
{
	if (!isalive_)
	{
		std::cout << "ScavTrap " << name_ << " can't attack " << target << ". Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attack_damages_ << " points of damage!" << std::endl;
	energy_points_--;;
	if(hit_points_ <= 0 || energy_points_ <= 0)
	{
		std::cout << "ScavTrap " << name_ << " died!" << std::endl;
		isalive_ = false;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	return ;
}
	