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
		if(this->hit_points <= 0 || this->energy_points <= 0)
			std::cout << "ClapTrap " << this->name << " died!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (0 < this->hit_points && 0 < this->energy_points)
	{
		std::cout << "ClapTrap " << this->name << " takes "  << amount << " damages" << std::endl;
		this->hit_points -= static_cast<long long>(amount);
		if(this->hit_points <= 0 || this->energy_points <= 0)
			std::cout << "ClapTrap " << this->name << " died!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (0 < this->hit_points && 0 < this->energy_points)
	{
		std::cout << "ClapTrap " << this->name << " repairs "  << amount << " hit point!" << std::endl; 
		this->hit_points += static_cast<long long>(amount);
		this->energy_points--;
		if(this->hit_points <= 0 || this->energy_points <= 0)
			std::cout << "ClapTrap " << this->name << " died!" << std::endl;
	}
}

void	ClapTrap::get_info(void) const
{
	std::cout << "--------info--------" << std::endl;
	std::cout << "name:	" << this->name << std::endl;
	std::cout << "hit point:" << this->hit_points << std::endl;
	std::cout << "energy:	" << this->energy_points << std::endl;
	std::cout << "attack:	" << this->attack_damage << std::endl;
	std::cout << "---------------------" << std::endl;
}
