#include "whatever.hpp"
#include <iostream>

int main()
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
