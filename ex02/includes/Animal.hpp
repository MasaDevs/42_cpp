#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &animal);
		virtual ~Animal();
		virtual void		makeSound(void) const = 0;
		std::string const	&getType(void);
		Animal	&operator=(Animal const &animal);
	protected:
		std::string		type_;
};
#endif
