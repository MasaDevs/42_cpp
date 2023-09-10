#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "this is Fixed constructor" << std::endl;
	this->value= 0;
	return ;
}

Fixed::Fixed(int const num)
{
	std::cout << "this is int const Fixed constructor" << std::endl;
	this->value = (num<<this->bits);
	return ;
}

Fixed::Fixed(float const num)
{
	std::cout << "this is float const Fixed constructor" << std::endl;
	this->value = roundf(num)  * (1<<this->bits);
	this->value += ((1<<this->bits) * (num - roundf(num)));
}

Fixed::~Fixed()
{
	std::cout << "this is Fixed destructor" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "this is Fixed copy constructor" << std::endl;
	this->value= fixed.value;
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
	std::cout << "this is Fixed copy constructor" << std::endl;
	this->value = fixed.value;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &fixed) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &fixed) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &fixed) const
{
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &fixed) const
{
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);
}

bool	Fixed::operator==(Fixed const &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}
bool	Fixed::operator!=(Fixed const &fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

bool	Fixed::operator<(Fixed const &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>(Fixed const &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}
		
bool	Fixed::operator<=(Fixed const &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

Fixed	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	Fixed	result = *this;
	++(*this);
	return (result);
}

const Fixed	Fixed::operator--(int)
{
	Fixed	result = *this;
	--(*this);
	return (result);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 <= fixed2 ? fixed2 : fixed1);
}

Fixed const	&Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	return (fixed1 <= fixed2 ? fixed2 : fixed1);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 <= fixed2 ? fixed1 : fixed2);
}

Fixed const	&Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	return (fixed1 <= fixed2 ? fixed1 : fixed2);
}

int		Fixed::toInt(void) const
{
		return (this->value>>this->bits);
}

float	Fixed::toFloat(void)  const
{
	float	num = 0;
	float	bits = 0.5;

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

