#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("cat")
{
	std::cout << "WrongCat Constructor" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &wrongcat)
{
	if (this != &wrongcat)
		WrongAnimal::operator=(wrongcat);
	return (*this);
}

WrongCat::WrongCat(WrongCat const &wrongcat) : WrongAnimal(wrongcat)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow-meow" << std::endl;
	return ;
}
