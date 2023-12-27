#include "Database.hpp"
#include "DateFormat.hpp"
#include <exception>
#include <limits.h>
#include <stdexcept>

Database::Database(std::string file_name)
{
	std::ifstream	ifs(file_name);
	std::string		line;
	if (!ifs)
	{
		std::cerr << "Error: database: constructor: Could'nt open the data file." << std::endl;
		return ;
	}
	std::getline(ifs, line);
	while(std::getline(ifs, line))
	{
		if (line.find(",") == std::string::npos)
		{
			std::cerr << "Error: database: constructor this format is not csv data !" << std::endl;
			continue ;
		}
		std::string	date = line.substr(0, line.find(","));
		std::string	s_data = line.substr(line.find(",") + 1);
		try
		{
			float	data = std::stof(s_data);
			this->insertData(date, data);
		}
		catch (std::invalid_argument &e)
		{
			std::cout << "database: constructor: the data is invalid. " << e.what() << std::endl;
		}
	}
	ifs.close();
}

bool	Database::insertData(std::string date, float data)
{
	DateFormat	dateformat("%Y-%m-%d", 10);
	if (!dateformat.checkDateFormat(date))
		throw std::invalid_argument("database: insert: ivalid date format: date is not feasible.");
	else if (data < 0 || static_cast<long long>(INT_MAX) < static_cast<long long>(data))
		throw std::invalid_argument("database: insert: ivalid data format: exceeded int range.");
	else if (!this->database.empty() && this->database.find(date) != this->database.end())
		throw std::invalid_argument("database: insert: ivalid data format: duplicate date.");
	this->database.insert(std::make_pair(date, data));
	return (true);
}
	
float	Database::searchData(std::string date)
{
	std::map<std::string, float>::iterator iter = this->database.lower_bound(date);
	if (date < database.begin()->first)
		throw std::invalid_argument("database: search: too old date !");
	return (iter->first == date ? iter->second : (--iter)->second);
}

void	Database::printData(void)
{
	for (std::map<std::string, float>::iterator iter = this->database.begin(); iter != database.end(); iter++)
		std::cout << "date: " << iter->first  << " data: " << iter->second << std::endl;
}


