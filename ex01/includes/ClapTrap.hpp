#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		ClapTrap(std::string name);	
		ClapTrap(std::string, long long, long long, long long);	
		ClapTrap(ClapTrap const &claptrap);
		~ClapTrap();	
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		getInfo(void) const;
		ClapTrap	&operator=(ClapTrap const &claptrap);
	private:
		std::string		name;
		long long		hit_points;
		long long		energy_points;
		long long		attack_damage;
};
#endif
