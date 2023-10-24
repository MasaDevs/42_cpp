#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name) : name_(name), hit_points_(10), energy_points_(10), attack_damages_(0), isalive_(true)
{
	std::cout << "ClapTop Constructor" << std::endl;
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
		name_ = claptrap.name_;
		hit_points_ = claptrap.hit_points_;
		energy_points_ = claptrap.energy_points_;
		attack_damages_ = claptrap.attack_damages_;
	}
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	*(this) = claptrap;
	return ;
}

	
void	ClapTrap::attack(std::string const &target)
{
	if (!isalive_)
	{
		std::cout << "ClapTrap " << name_ << " can't attack " << target << ". Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damages_ << " points of damage!" << std::endl;
	energy_points_--;
	if(hit_points_ <= 0 || energy_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " died!" << std::endl;
		isalive_ = false;
	}
	return ;
}

void	ClapTrap::takeDamages(unsigned int amount)
{
	if (!isalive_)
	{
		std::cout << "ClapTrap " << name_ << " has been already dead."  << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " takes "  << amount << " damages" << std::endl;
	hit_points_ -= static_cast<long long>(amount);
	if(hit_points_ <= 0 || energy_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " died!" << std::endl;
		isalive_ = false;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!isalive_)
	{
		std::cout << "ClapTrap " << name_ << " can't be repaired. Need hit_points or energy_points !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " is repaired "  << amount << " hit point!" << std::endl; 
	hit_points_ += static_cast<long long>(amount);
	energy_points_--;
	if(hit_points_ <= 0 || energy_points_ <= 0)
	std::cout << "ClapTrap " << name_ << " died!" << std::endl;
}

void	ClapTrap::getInfo(void) const
{
	std::cout << "--------info--------" << std::endl;
	std::cout << "name:	" << name_ << std::endl;
	std::cout << "hit point:" << hit_points_ << std::endl;
	std::cout << "energy:	" << energy_points_ << std::endl;
	std::cout << "attack:	" << attack_damages_ << std::endl;
	std::cout << "---------------------" << std::endl;
}

void	ClapTrap::setHitPoints(long long hit_points)
{
	hit_points_ = hit_points;
}

void	ClapTrap::setEnergyPoints(long long energy_points)
{
	energy_points_ = energy_points;
}

void	ClapTrap::setAttackDamages(long long attack_damages)
{
	attack_damages_ = attack_damages;
}

void	ClapTrap::setIsAlive(bool isalive)
{
	isalive_ = isalive;
}

