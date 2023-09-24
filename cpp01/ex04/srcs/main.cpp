#include "Sed.hpp"
#include "ReplaceString.hpp"
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		std::cout << "Error: The argument must be 3" << std::endl;
		std::cout << "Usage: Sed <filename> <src> <dst>" << std::endl;
		return (0);
	}
	Sed	sed(argv[1], argv[2], argv[3]);
	sed.editStream();
}	

