#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class	Dog:public AAnimal
{
	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();
		void	makeSound(void) const;
		Dog		&operator=(Dog const &dog);
};
#endif
