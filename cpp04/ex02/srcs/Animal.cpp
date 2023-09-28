#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Constructor" << std::endl;
	this->my_brain = new Brain();
	return ;
}

AAnimal::AAnimal(AAnimal const &AAnimal)
{
	std::cout << "AAnimal Copy Constructor" << std::endl;
	*this = AAnimal;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor" << std::endl;
	if (this->my_brain)
		delete this->my_brain;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &AAnimal)
{
	if (this != &AAnimal)
	{
		this->type = AAnimal.type;
		this->my_brain = AAnimal.my_brain;
	}
	return (*this);
}

std::string	AAnimal::getType(void)
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Base Sound" << std::endl;
	return ;
}

