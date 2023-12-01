#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Constructor" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &cat)
{
	if (this != &cat)
		Animal::operator=(cat);
	return (*this);
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat Copy Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "meow-meow" << std::endl;
	return ;
}
