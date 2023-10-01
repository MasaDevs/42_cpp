#include "Database.hpp"
#include "DateFormat.hpp"
#include <limits.h>

Database::Database(std::string file_name)
{
	std::ifstream	ifs(file_name);
	std::string		line;
	if (!ifs)
	{
		std::cerr << "Could'nt open the data file." << std::endl;
		return ;
	}
	std::getline(ifs, line);
	while(std::getline(ifs, line))
	{
		if (line.size() <= line.find(","))
		{
			std::cerr << "this format is not csv data !" << std::endl;
			continue ;
		}
		std::string	date = line.substr(0,line.find(","));
		std::string	s_data = line.substr(line.find(",") + 1);
		try
		{
			float	data = std::stof(s_data);
			this->insertData(date, data);
		}
		catch (std::invalid_argument &e)
		{
			std::cout << "This line is invalid. " << e.what() << std::endl;
		}
	}
	ifs.close();
}

bool	Database::insertData(std::string date, float data)
{
	DateFormat	dateformat("%Y-%m-%d", 10);
	if (!dateformat.checkDateFormat(date))
		throw std::invalid_argument("ivalid date format: date is not feasible.");
	else if (data < 0 || INT_MAX < data)
		throw std::invalid_argument("ivalid data format: exceeded int range.");
	else if (!this->database.empty() && this->database.find(date) != this->database.end())
		throw std::invalid_argument("ivalid data format: duplicate date.");
	this->database[date] = data;
	return (true);
}

	
float	Database::searchData(std::string date)
{
	std::map<std::string, float>::iterator iter = this->database.lower_bound(date);
	if (iter == this->database.end())
	{
		if (date < this->database.begin()->first)
			throw std::invalid_argument("too old date !");
		else if (this->database.rbegin()->first < date)
			return (this->database.rbegin()->second);
	}
	else
	{
		if (this->database.begin() == iter)
			throw std::invalid_argument("too old date !");
		iter--;
		return (iter->second);
	}
	throw std::invalid_argument("can't get data !");
}

void	Database::printData(void)
{
	for (std::map<std::string, float>::iterator iter = this->database.begin(); iter != database.end(); iter++)
		std::cout << iter->first << " " << iter->second << std::endl;
}


