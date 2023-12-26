#include <iostream>
#include <string>
#include <fstream>
#include "Database.hpp"
#include <exception>

int	main()
{
	Database database("data.csv");

	std::ifstream	ifs("input.text");
	std::string		line;
	if (!ifs)
	{
		std::cerr << "Could'nt open the data file." << std::endl;
		return (0);
	}
	std::getline(ifs, line);
	while(std::getline(ifs, line))
	{
		if (line.size() <= line.find("|"))
		{
			std::cerr << "this format is bad !" << std::endl;
			continue ;
		}
		std::string	date = line.substr(0,line.find(" |"));
		std::string	s_data = line.substr(line.find("|") + 1);
		try
		{
			float	input_data = std::stof(s_data);
			if (input_data < 0 || INT_MAX < input_data)
				throw std::invalid_argument("Too Large Number !");
			float	db_data = database.searchData(date);
			std::cout << date  << " " << input_data << "=>" << input_data / db_data << std::endl;
		}
		catch (std::invalid_argument &e)
		{
			std::cout << "Error!: " << e.what() << std::endl;
		}
	}
	ifs.close();
}


