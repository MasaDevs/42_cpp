#ifndef	SCALARCONVERTER_HPP
#define	SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <exception>

class	ScalarConverter
{
	public:
		static void		convert(std::string const &target);
	private:
		ScalarConverter();
		static std::string	convertCharToAsciiNumber(char chr);
		static double		convertStringToDouble(std::string str);
		static float		convertStringToFloat(std::string str);
		static int		convertStringToInt(std::string str);
		static char		convertStringToChar(std::string str);
};

#endif
