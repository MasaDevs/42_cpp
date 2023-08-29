#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class	HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &wpn);
		void	attack(void) const;
	private:
		std::string name;
		Weapon	*wpn;
};

#endif
