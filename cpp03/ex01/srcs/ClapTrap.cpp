#include "ClapTrap.hpp"
#include <iostream>
#include <string>


ClapTrap::ClapTrap(std::string name)
{
	std::cout << "this is ClapTop constructor" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "this is ClapTop destructor" << std::endl;
	return ;
}
	
void	ClapTrap::attack(const std::string& target)
{
	if (0 < this->hit_points && 0 < this->energy_points)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}

void	ClapTrap::get_info(void)
{
	std::cout << this->name << std::endl;
	std::cout << this->hit_points << std::endl;
	std::cout << this->energy_points << std::endl;
	std::cout << this->attack_damage << std::endl;
}
