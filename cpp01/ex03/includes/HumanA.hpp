#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon wpn);
		void	attack(void) const;
	private:
		Weapon		wpn;
		std::string name;
};

#endif
