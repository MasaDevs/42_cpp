#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: the arguments must be 1." << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
}

