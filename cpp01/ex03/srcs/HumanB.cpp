#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
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
	if(this->weapon == NULL)
		std::cout << this->name << " don't have a weapon." << std::endl;
	else
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	}
	return ;
}


