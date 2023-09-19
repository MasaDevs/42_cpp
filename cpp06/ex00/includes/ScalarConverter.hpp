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
		static size_t	countDigitsUnderDecimalPoint(std::string);
		static bool		isStringDigit(std::string);
		static void		convertChar(std::string str_num);
		static void		convertInt(std::string);
		static void		convertFloat(std::string str_num);
		static void		convertDouble(std::string str_num);

};

#endif
