#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>
#include <string>

class	WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &WrongAnimal);
		~WrongAnimal();
		void			makeSound(void) const;
		std::string const	&getType(void) const;
		WrongAnimal		&operator=(WrongAnimal const &WrongAnimal);
	protected:
		std::string		type_;
};
#endif
