#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class	AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		virtual void	makeSound(void) const  = 0;
	protected:
		std::string		type;
};
#endif
