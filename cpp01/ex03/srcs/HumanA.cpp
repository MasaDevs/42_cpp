#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon)
{
	std::cout << "this is HumanA Constructor" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "this is HumanA Destructor" << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::string const	str = this->weapon.getType();
	std::cout << this->name << " attacks with their " << str << std::endl;
	return ;
}
