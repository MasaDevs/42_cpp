#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor" << std::endl;
	this->my_brain = new Brain();
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
	if (this->my_brain)
		delete this->my_brain;
	return ;
}

Animal	&Animal::operator=(Animal const &animal)
{
	if (this != &animal)
	{
		this->type = animal.type;
		this->my_brain = animal.my_brain;
	}
	return (*this);
}

std::string	Animal::getType(void)
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Base Sound" << std::endl;
	return ;
}

