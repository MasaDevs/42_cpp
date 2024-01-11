#include "Database.hpp"
#include "DateFormat.hpp"
#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <exception>
#include <climits>

int	main(int argc, char *argv[])
{
	Database	database("data.csv");
	
	if (argc != 2)
	{
		std::cerr << "Error: the argument must be 1." << std::endl;
		return (1);
	}

	std::ifstream	ifs_input(argv[1]);
	if (!ifs_input)
	{
		std::cerr << "Error: Could'nt open the data file." << std::endl;
		return (1);
	}

	std::string		line;
	std::getline(ifs_input, line);
	while(std::getline(ifs_input, line))
	{
		if (line.find(" |") == std::string::npos)
		{
			std::cerr << "input: the format is bad !" << std::endl;
			continue ;
		}
		std::string	date = line.substr(0,line.find(" |"));
		std::string	s_data = line.substr(line.find("|") + 1);
		try
		{
			if (!DateFormat::checkDateFormat(date))
				throw std::invalid_argument("input: bad date format");
			double	input_data = std::stof(s_data);
			if (input_data < 0)
				throw std::invalid_argument("input: not a positive number.");
			else if (static_cast<double>(INT_MAX) < input_data)
				throw std::invalid_argument("input: too Large Number !");
			double	db_data = database.searchData(date);
			std::cout << date << " =>  " << input_data << " = " << db_data * input_data << std::endl;
		}
		catch (std::invalid_argument &e)
		{
			std::cerr << "Error!: " << e.what() << std::endl;
		}
	}
	ifs_input.close();
}


