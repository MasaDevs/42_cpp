#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA Constructor" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor" << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}
