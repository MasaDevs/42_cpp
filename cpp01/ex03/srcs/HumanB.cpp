#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
	std::cout << "this is HumanB Constructor" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "this is HumanB Constructor" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack(void) const
{
	if(this->weapon == nullptr)
		std::cout << this->name << " don't have weapon." << std::endl;
	else
	{
		std::string const	&str = this->weapon->getType();
		std::cout << this->name << " attacks with their " << str << std::endl;
	}
	return ;
}


