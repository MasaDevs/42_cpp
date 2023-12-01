#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Dog:public Animal
{
	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();
		void	makeSound(void) const;
		Dog		&operator=(Dog const &dog);
	private:
		Brain	*brain;
};
#endif
