#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Constructor" << std::endl;
	return ;
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = dog;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &dog)
{
	if (this != &dog)
		Animal::operator=(dog);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "bau-bau" << std::endl;	
	return ;
}
