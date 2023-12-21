#ifndef	SCALARCONVERTER_HPP
#define	SCALARCONVERTER_HPP
#include <iostream>
#include <string>

class	ScalarConverter
{
	public:
		static void		convert(std::string chr);
	private:
		ScalarConverter();
		static int		isprint(int chr);
		static size_t	countDigitsUnderDecimalPoint(std::string);
		static bool		isStringDigit(std::string);
		static char		convertChar(std::string str_num);
		static int		convertInt(std::string);
		static float	convertFloat(std::string str_num);
		static double	convertDouble(std::string str_num);
};

#endif
