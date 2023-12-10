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

Animal::Animal(std::string const &type) : type_(type)
{
	std::cout << "Animal Default Constructor" << std::endl;
	return ;
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
		this->type_ = animal.type_;
	}
	return (*this);
}

std::string	const &Animal::getType(void)
{
	return (this->type_);
}

void	Animal::makeSound(void) const
{
	std::cout << "Base Sound" << std::endl;
	return ;
}

