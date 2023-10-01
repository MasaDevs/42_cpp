
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
	return (this->isValidDay(result));
}

bool	DateFormat::isValidDay(struct tm result)
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
