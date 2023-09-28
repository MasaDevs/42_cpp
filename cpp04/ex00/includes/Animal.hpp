#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal();
		Animal(Animal const &animal);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		Animal	&operator=(Animal const &animal);
		std::string		getType(void);
	protected:
		std::string		type;
};
#endif
