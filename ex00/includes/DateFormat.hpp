#ifndef	DATEFORMAT_HPP
#define DATEFORMAT_HPP
#include <iostream>
#include <string>
#include <time.h>

class	DateFormat
{
	public:
		DateFormat(std::string date_format, unsigned int date_len);
		bool	checkDateFormat(std::string);
		bool	isValidDay(struct tm result);
	private:
		std::string		date_format;
		unsigned int	date_len;
};

#endif
