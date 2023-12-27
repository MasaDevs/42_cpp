#ifndef	DATEFORMAT_HPP
#define DATEFORMAT_HPP
#include <iostream>
#include <string>
#include <ctime>

class	DateFormat
{
	public:
		static bool	checkDateFormat(std::string const &);
		static bool	isValidDay(int year, int month, int day);
	private:
		DateFormat();
};

#endif
