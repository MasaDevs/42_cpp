#include "FlagTrap.hpp"
#include <iostream>
#include <string>

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	std::cout << "this is FlagTrap constructor" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 100;
	return ;
}

FlagTrap::~FlagTrap()
{
	std::cout << "this is FlagTrap destructor" << std::endl;
}
	
