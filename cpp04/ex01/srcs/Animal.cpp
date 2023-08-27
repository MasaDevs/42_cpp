#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "this is Animal constructor" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "this is Animal destructor" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "this is base sound" << std::endl;
	return ;
}
