#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("base-type")
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const &type) : type_(type)
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = wrongAnimal;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &wrongAnimal)
{
	std::cout << "WrongAnimal Copy Operator" << std::endl;
	if (this != &wrongAnimal)
		this->type_ = wrongAnimal.type_;	
	return (*this);
}

std::string	const &WrongAnimal::getType(void) const
{
	return (this->type_);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Base Sound" << std::endl;
	return ;
}
