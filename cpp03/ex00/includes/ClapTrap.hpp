#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		ClapTrap(std::string name);	
		~ClapTrap();	
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	get_info(void);
	private:
		std::string		name;
		long long		hit_points;
		long long		energy_points;
		long long		attack_damage;
};
#endif
