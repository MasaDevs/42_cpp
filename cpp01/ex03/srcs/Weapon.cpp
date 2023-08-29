#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}
std::string	const	&Weapon::getType(void) const
{
	std::string const	&str = this->type;
	return (str);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
