#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void)
{
	std::cout << "this is Dog Constructor" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::~Dog(void)
{
	std::cout << "this is Dog Destructor" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "bau-bau" << std::endl;	
	return ;
}
