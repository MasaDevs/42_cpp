#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor" << std::endl;
	return ;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = animal;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &animal)
{
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return (*this);
}

std::string	const &Animal::getType(void)
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Base Sound" << std::endl;
	return ;
}

