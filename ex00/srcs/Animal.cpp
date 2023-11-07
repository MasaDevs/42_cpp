#include "Animal.hpp"

Animal::Animal() : type("base-type")
{
	std::cout << "Animal Default Constructor" << std::endl;
	return ;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = animal;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &animal)
{
	std::cout << "Animal Copy Operator" << std::endl;
	if (this != &animal)
		this->type = animal.type;	
	return (*this);
}

std::string	const &Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Base Sound" << std::endl;
	return ;
}