#include "whatever.hpp"
#include <iostream>

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		int a = 10;
		int b = 20;

		std::cout << "-----START-----" << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "-----END-----" << std::endl;

		std::cout << "-----SWAP-----" << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "-----END-----" << std::endl;

		std::cout << "-----TEST-----" << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "-----min(a - 30, b)-----" << std::endl;
		std::cout << "min: " << min(a - 30, b) << std::endl;
		std::cout << "-----END-----" << std::endl;
		
		std::cout << "-----TEST-----" << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "-----max(a, b + 30)-----" << std::endl;
		std::cout << "max: " << max(a, b + 30) << std::endl;
		std::cout << "-----END-----" << std::endl;
	}
}
