#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

Weapon::Weapon() : type("default")
{
	std::cout << "Weapon Constructor" << std::endl;
	return ;
}

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Weapon Constructor" << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor" << std::endl;
	return ;
}

std::string	const	&Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

