#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wpn = nullptr;
	return ;
}

void	HumanB::setWeapon(Weapon &wpn)
{
	this->wpn = &wpn;
	return ;
}

void	HumanB::attack(void) const
{
	if(this->wpn == nullptr)
		std::cout << this->name << " don't have weapon." << std::endl;
	else
	{
		std::string const	&str = this->wpn->getType();
		std::cout << this->name << " attacks with their " << str << std::endl;
	}
	return ;
}


