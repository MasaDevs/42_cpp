#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class	Animal
{
	public:
		Animal();
		virtual ~Animal();
		virtual void	makeSound(void) const  = 0;
	protected:
		std::string		type;
};
#endif
