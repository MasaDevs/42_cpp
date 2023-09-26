#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(int const num);
		Fixed(float const num);
		Fixed(Fixed const &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed	&operator=(Fixed const &fixed);
		Fixed	operator+(Fixed const &fixed) const;
		Fixed	operator-(Fixed const &fixed) const;
		Fixed	operator/(Fixed const &fixed) const;
		Fixed	operator*(Fixed const &fixed) const;
		bool	operator==(Fixed const &fixed) const;
		bool	operator!=(Fixed const &fixed) const;
		bool	operator<(Fixed const &fixed) const;
		bool	operator>(Fixed const &fixed) const;
		bool	operator>=(Fixed const &fixed) const;
		bool	operator<=(Fixed const &fixed) const;
		Fixed	operator++();
		Fixed	operator--();
		const Fixed	operator++(int);
		const Fixed	operator--(int);
		static Fixed	&max(Fixed &fixed1, Fixed &fixed2);
		static Fixed	&min(Fixed &fixed1, Fixed &fixed2);
		static Fixed const	&max(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed const	&min(Fixed const &fixed1, Fixed const &fixed2);
	private:
		int		value;
		static int const	bits = 8;
};
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);
#endif
