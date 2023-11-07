#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		ClapTrap(std::string name);	
		ClapTrap(ClapTrap const &claptrap);
		~ClapTrap();	
		ClapTrap		&operator=(ClapTrap const &claptrap);
		virtual void	attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			getInfo(void) const;
		void			setHitPoints(long long hit_points);
		void			setEnergyPoints(long long enegy_points);
		void			setAttackDamages(long long attack_damages);
		void			setIsAlive(bool isalive);
		std::string		getName() const;
		long long		getHitPoints() const;
		long long		getEnergyPoints() const;
		long long		getAttackDamages() const;
		bool			getIsAlive() const;
	private:
		std::string		name_;
		long long		hit_points_;
		long long		energy_points_;
		long long		attack_damages_;
		bool			isalive_;
};
#endif
