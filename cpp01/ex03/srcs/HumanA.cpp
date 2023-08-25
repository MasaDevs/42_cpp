#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon wpn)
{
	this->name = name;
	this->wpn = wpn;
	return ;
}

void	HumanA::attack(void) const
{
	std::string const	&str = this->wpn.getType();
	std::cout << this->name << " attacks with their " << str << std::endl;
	return ;
}
