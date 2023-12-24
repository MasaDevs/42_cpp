#ifndef	SCALARCONVERTER_HPP
#define	SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <iomanip>
#include <exception>

enum	ScalarType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	ERROR,
};

class	ScalarConverter
{
	public:
		static void		convert(std::string target);
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter &scalar_converter);
		~ScalarConverter();
		ScalarConverter		&operator=(ScalarConverter const &scalar_converter);
		static ScalarType	judgeScalarType(std::string const &target);
		template<typename T>
		static bool			isPrintable(T num);
		template <typename T>
		static void			convertType(T scalar_target);
		static void			convertType(float scalar_target);
		static void			convertType(double scalar_target);
};

#endif
