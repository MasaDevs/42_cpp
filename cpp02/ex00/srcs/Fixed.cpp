#include "Fixed.hpp"
#include <bitset>
Fixed::Fixed()
{
	std::cout << "Fixed Default Constructor" << std::endl;
	this->value= 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Fixed Copy Constructor" << std::endl;
	*(this) = fixed;
	return ;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member Func" << std::endl;
	this->value= raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "setRawBits member Func" << std::endl;
	return (this->value);
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Fixed Copy Operator" << std::endl;
	if (this != &fixed)
		this->value = fixed.value;
	return (*this);
}

