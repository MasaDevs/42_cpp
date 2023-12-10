#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void) : Animal("dog")
{
	std::cout << "Dog Constructor" << std::endl;
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->brain = new Brain();
	*this = dog;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor" << std::endl;
	delete this->brain;
	return ;
}

Dog		&Dog::operator=(Dog const &dog)
{
	if (this != &dog)
	{
		Animal::operator=(dog);
		*(this->brain) = *(dog.brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "bau-bau" << std::endl;	
	return ;
}
