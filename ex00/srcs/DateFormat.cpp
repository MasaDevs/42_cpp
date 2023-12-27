
#include "DateFormat.hpp"

DateFormat::DateFormat(std::string date_format, unsigned int date_len) : date_format(date_format), date_len(date_len)
{
	return ;
}

bool	DateFormat::checkDateFormat(std::string date)
{
	struct tm result;

	if (date.size() != this->date_len)
		return (false);
	else if (strptime(date.c_str(), this->date_format.c_str(), &result) == NULL)
		return (false);
	std::cout << result.tm_mday << std::endl;
	return (this->isValidDay(result));
}

bool	DateFormat::isValidDay(struct tm result)
{
	int		month = result.tm_mon + 1;
	int		day = result.tm_mday;
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
			if (result.tm_year % 4 == 0 && result.tm_year % 100)
				return (1 <= day && day <= 29 ? true : false);
			return (1 <= day && day <= 28 ? true : false);
		default :
			return (false);
	}
}
