
#include "DateFormat.hpp"
#include <string>

bool	DateFormat::checkDateFormat(std::string const &date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	int			year = std::stoi(date.substr(0, 4));	
	int			month = std::stoi(date.substr(5, 2));
	int			day = std::stoi(date.substr(8, 2));
	return (isValidDay(year, month, day));
}

bool	DateFormat::isValidDay(int year, int month, int day)
{
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return (1 <= day && day <= 31 ? true : false);
		case 4:
		case 6:
		case 9:
		case 11:
			return (1 <= day && day<= 30 ? true : false);
		case 2:
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100) )
				return (1 <= day && day <= 29 ? true : false);
			return (1 <= day && day <= 28 ? true : false);
		default :
			return (false);
	}
}
