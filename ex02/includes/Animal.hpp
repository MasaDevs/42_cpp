#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class	Animal
{
	public:
		virtual ~Animal();
		virtual void		makeSound(void) const;
		std::string const	&getType(void);
		Animal	&operator=(Animal const &animal);
	protected:
		Animal();
		Animal(Animal const &animal);
		std::string		type_;
};
#endif
