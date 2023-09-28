#include "Fixed.hpp"
#include <bitset>
Fixed::Fixed()
{
	std::cout << "Fixed Default Constructor" << std::endl;
	this->value= 0;
	return ;
}

Fixed::Fixed(int const num)
{
	std::cout << "Fixed Int Constructor" << std::endl;
	this->value = (num<<(this->bits));
	return ;
}

Fixed::Fixed(float const num)
{
	std::cout << "Fixed Float Constructor" << std::endl;
	this->value = roundf(num)  * (1<<(this->bits));
	this->value += ((num - roundf(num)) * (1<<(this->bits)));
}

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	*(this) = fixed;
	std::cout << "Fixed Copy Constructor" << std::endl;
	return ;
}

void	Fixed::setRawBits(int const raw)
{
	this->value= raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Fixed Copy Operator" << std::endl;
	if (this != &fixed)
		this->value = fixed.value;
	return (*this);
}

int		Fixed::toInt(void) const
{
		return (this->value>>this->bits);
}

float	Fixed::toFloat(void)  const
{
	float	num = 0;
	float	bits = 1.0 / 2.0;

	num += (this->value>>this->bits);
	for(int i = this->bits - 1; 0 <= i; i--)
	{
		if((this->value>>i) & 1)
			num += bits;
		bits /= 2;
	}
	return (num);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

