#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "this is Fixed constructor" << std::endl;
	this->sign = 0;
	this->decimal = 0;
	this->fraction = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "this is Fixed destructor" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "this is Fixed copy constructor" << std::endl;
	this->sign = fixed.sign;
	this->decimal = fixed.decimal;
	this->fraction = fixed.fraction;
	return ;
}

void	Fixed::setRawBits(int const raw)
{
	this->decimal = raw>>this->bits;
	this->fraction = raw  - (this->decimal<<this->bits);
}

int		Fixed::getRawBits(void) const
{

	return ((this->decimal << this->bits) + this->fraction);
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "this is Fixed copy constructor" << std::endl;
	this->sign = fixed.sign;
	this->decimal = fixed.decimal;
	this->fraction = fixed.fraction;
	return (*this);
}
	

	
