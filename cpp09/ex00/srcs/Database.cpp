#include "Database.hpp"
#include <time.h>
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
			return ;
		}
		std::string	date = line.substr(0,line.find(","));
		std::string	s_data = line.substr(line.find(",") + 1);
		long long	data = std::stol(s_data);
		this->insertData(date, data);
	}
}

bool	Database::insertData(std::string date, long long data)
{
	//ここら辺例外でもいい
	if (!this->checkDateFormat(date))
		return (false);
	else if (data < INT_MIN || INT_MAX < data)
		return (false);
	else if (this->database.find(date) != this->database.end())
		return (false);
	this->database[date] = data;
	return (true);
}

void	Database::printData(void)
{
	for (std::map<std::string, int>::iterator iter = this->database.begin(); iter != database.end(); iter++)
		std::cout << iter->first << " " << iter->second << std::endl;
}

bool	Database::checkDateFormat(std::string date)
{
	struct tm result;

	if (date.size() != 10)
		return (false);
	else if (strptime(date.c_str(), "%Y-%m-%d", &result) == NULL)
		return (false);
	return (this->isValidDay(result));
}

bool	Database::isValidDay(struct tm result)
{
	switch(result.tm_mon + 1)
	{
		case 1:
		case 3: case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (30 < result.tm_mday)
				return (false);
			break;
		case 2:
		{
			if (result.tm_year % 4 == 0 && result.tm_year % 100)
			{
				if (29 < result.tm_mday)
					return (false);
			}
			else if (28 < result.tm_mday)
				return (false);
			break;
		}
	}
	return (true);
}

