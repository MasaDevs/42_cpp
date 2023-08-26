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

	std::string input_filename = std::string(argv[1]);
	std::string output_filename = input_filename + std::string(".replace");
	std::ifstream input_file(input_filename);
	std::ofstream output_file(output_filename);

	if (input_file.fail())
	{
		std::cout << "cannot opne file" << std::endl;
		return (0);
	}
	
	std::string	line;
	std::string	s1 = std::string(argv[2]);
	std::string	s2 = std::string(argv[3]);
	while (std::getline(input_file, line))
	{
		output_file << ReplaceString::replace(line, s1, s2) << std::endl;
	}
}	

