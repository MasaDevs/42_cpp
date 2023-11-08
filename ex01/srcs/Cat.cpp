#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
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
	{
		Animal::operator=(cat);
		this->brain = cat.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "this is Cat destructor" << std::endl;
	delete brain;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "meow-meow" << std::endl;
	return ;
}
