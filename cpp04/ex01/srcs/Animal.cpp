#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "this is Animal constructor" << std::endl;
	this->my_brain = new Brain();
	return ;
}

Animal::~Animal()
{
	std::cout << "this is Animal destructor" << std::endl;
	delete this->my_brain;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "this is base sound" << std::endl;
	return ;
}
