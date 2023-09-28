#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = cat;
	return ;
}

Cat	&Cat::operator=(Cat const &cat)
{
	if (this != &cat)
		AAnimal::operator=(cat);
	return (*this);
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
