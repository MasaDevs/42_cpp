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
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
		Fixed				&operator=(Fixed const &fixed);
	private:
		int					value;
		static int const	bits = 8;
};
		
std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
