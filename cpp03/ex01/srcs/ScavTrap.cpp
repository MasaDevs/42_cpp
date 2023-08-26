#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "this is Scav Constructor" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	return ;
}

void	ScavTrap::attack(std::string name)
{
	std::cout << "this is scav attack" << name << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "this is Scav Destructor" << std::endl;
	return ;
}
