#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	std::cout << "b is " << b + c << std::endl;
	std::cout << "b is " << b - c << std::endl;
	std::cout << "b is " << b * c << std::endl;
	std::cout << "b is " << b / c << std::endl;

	Fixed A(-100.10f);
	Fixed B(-100.10f);
	Fixed C(-100.11f);
	if(A == B)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	if(A != C)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	if(C < A)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	if(A <= B)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	A++;	
	if(A != B)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	A--;
	if(A == B)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	if(Fixed::max(A, C) == A)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	if(Fixed::max(B, C) == B)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
	if(Fixed::min(B, C) == C)
		std::cout << "OK" << std::endl;
	else
		std::cout << "NG" << std::endl;
}
