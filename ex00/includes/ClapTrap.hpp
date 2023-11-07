#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		explicit	ClapTrap(std::string name);	
		ClapTrap(ClapTrap const &claptrap);
		~ClapTrap();	
		ClapTrap	&operator=(ClapTrap const &claptrap);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		getInfo(void) const;
	private:
		std::string		name_;
		long long		hit_points_;
		long long		energy_points_;
		long long		attack_damages_;
		bool			isalive_;
};
#endif
