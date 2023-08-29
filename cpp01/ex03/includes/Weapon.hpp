#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class	Weapon
{
	public:
		Weapon() {this->type = "default";}
		Weapon(std::string type);
		std::string	const	&getType(void) const;
		void				setType(std::string);
	private:
		std::string			type;
};
#endif

