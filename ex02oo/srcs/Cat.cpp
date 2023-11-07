#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "this is Cat constructor" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::~Cat()
{
	std::cout << "this is Cat destructor" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "meow-meow" << std::endl;
	return ;
}
