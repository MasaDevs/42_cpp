#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const &fixed);
	private:
		unsigned int		sign;
		unsigned int		decimal;
		unsigned int		fraction;
		static int const	bits = 8;
};
		

#endif
