#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	FlagTrap: public ClapTrap
{
	public:
		FlagTrap(std::string name);
		FlagTrap(FlagTrap const &flagtrap);
		~FlagTrap();
		FlagTrap	&operator=(FlagTrap const &flagtrap);
		void	highFivesGuys(void);
};
#endif
