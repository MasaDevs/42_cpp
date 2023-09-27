#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTop constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, long long hit_points, long long energy_points, long long attack_damage) : name(name), hit_points(hit_points), energy_points(energy_points), attack_damage(attack_damage)
{
	std::cout << "ClapTop constructor" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTop Destructor" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &claptrap)
{
	if (this != &claptrap)
	{
		this->name = claptrap.name;
		this->hit_points = claptrap.hit_points;
		this->energy_points = claptrap.energy_points;
		this->attack_damage = claptrap.attack_damage;
	}
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	*(this) = claptrap;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't attack " << target << ". Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points--;
	if(this->hit_points <= 0 || this->energy_points <= 0)
		std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has been already dead."  << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes "  << amount << " damages" << std::endl;
	this->hit_points -= static_cast<long long>(amount);
	if(this->hit_points <= 0 || this->energy_points <= 0)
		std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't be repaired. Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " is repaired "  << amount << " hit point!" << std::endl; 
	this->hit_points += static_cast<long long>(amount);
	this->energy_points--;
	if(this->hit_points <= 0 || this->energy_points <= 0)
	std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void	ClapTrap::getInfo(void) const
{
	std::cout << "--------info--------" << std::endl;
	std::cout << "name:	" << this->name << std::endl;
	std::cout << "hit point:" << this->hit_points << std::endl;
	std::cout << "energy:	" << this->energy_points << std::endl;
	std::cout << "attack:	" << this->attack_damage << std::endl;
	std::cout << "---------------------" << std::endl;
}

