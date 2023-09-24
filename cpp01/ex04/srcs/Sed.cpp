#include "Sed.hpp"

Sed::Sed(std::string file_name, std::string s1, std::string s2) : input_file_name(file_name), s1(s1), s2(s2)
{
	std::cout << "Sed Constructor" << std::endl;
	return ;
}

Sed::~Sed()
{
	std::cout << "Sed Destructor" << std::endl;
	return ;
}

void	Sed::editStream(void)
{
	std::string		output_file_name = this->input_file_name + std::string(".replace");
	std::ifstream	input_file(input_file_name);
	std::ofstream	output_file(output_file_name);

	if (input_file.fail())
	{
		std::cout << "cannot opne file" << std::endl;
		output_file.close();
		return ;
	}
	std::cout << "Replacing..." << std::endl;
	std::string	line;
	while (std::getline(input_file, line))
		output_file << ReplaceString::replace(line, s1, s2) << std::endl;
	input_file.close();
	output_file.close();
	std::cout << "Done !" << std::endl;
}
