#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>


void	ScalarConverter::convert(std::string num)
{
	try
	{
		char	result = ScalarConverter::convertChar(num);
		std::cout << "char: " << '\''<< result << '\''<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int		result = ScalarConverter::convertInt(num);
		std::cout << "int: " << result << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{

		float	result = ScalarConverter::convertFloat(num);
		std::cout << "float: " << result << "f"<< std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		double	result = ScalarConverter::convertDouble(num);
		std::cout << "double: " << result << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		ScalarConverter::isprint(int chr)
{
	if (chr < 32 || 126 < chr)
			return (0);
	return (chr);
}

bool	ScalarConverter::isStringDigit(std::string num)
{
	size_t	dot_count = 0;
	if (num.size() == 1)
			return (true);
	for (size_t i = 0; i < num.size() - 1; i++)
	{
		if (i == 0 && num[i] == '-')
				continue ;
		if ('0' <= num[i] && num[i] <= '9')
			continue ;
		else if (num[i] == '.' && num[i + 1] != 'f')
		{
			dot_count++;
			continue ;
		}
		return (false);
	}
	if ((num[num.size() - 1] < '0' || '9' < num[num.size() - 1]) && num[num.size() - 1] != 'f')
		return (false);
	if (1 < dot_count|| num[0] == '.')
		return (false);
	return (true);
}

//this function's argument must be affordable numeric
size_t	ScalarConverter::countDigitsUnderDecimalPoint(std::string str_num)
{
	size_t	count = 0;
	bool	is_under_decimal_point = false;
	bool	is_upper_zero = false;
	for (size_t i = 0; i < str_num.size(); i++)
	{
		if (str_num[i] == '.')
			is_under_decimal_point = true;
		else if (is_under_decimal_point)
		{
			if ('1' <= str_num[i] && str_num[i] <= '9')
				is_upper_zero = true;
			count++;
		}
	}
	if (is_upper_zero)
		return (count);
	return (1);
}
	
// Cast
char	ScalarConverter::convertChar(std::string str_num)
{
	int			num;
	char		result;

	if (str_num.size() != 1)
			throw std::invalid_argument("Char: impossible");
	try
	{
		num = ScalarConverter::convertInt(str_num);
	}
	catch (std::exception &e)
	{
		throw std::invalid_argument("Char: impossible");
	}
	if (!ScalarConverter::isprint(num))
			throw std::out_of_range("Char: Non displayable");
	result = static_cast<char> (num);
	return (result);
}
		
int		ScalarConverter::convertInt(std::string str_num)
{

	int		num;
	if (!ScalarConverter::isStringDigit(str_num))
		throw std::invalid_argument("int: Impossible");
	if (str_num.size() == 1 && (str_num[0] < '0' || '9' < str_num[0]))
		num = static_cast<int> (str_num[0]);
	else
		num = std::stoi(str_num);
	return (num);
}

float	ScalarConverter::convertFloat(std::string str_num)
{
	float	num;

	if (!ScalarConverter::isStringDigit(str_num))
	{
		if (str_num == "inff" || str_num == "inf")
			throw std::out_of_range("float: inff");
		else if (str_num == "-inff" || str_num == "-inf")
			throw std::out_of_range("float: -inff");
		else if (str_num == "nanf" || str_num == "nan")
			throw std::out_of_range("float: nanf");
		throw std::invalid_argument("float: nan");
	}
	if (str_num.size() == 1 && (str_num[0] < '0' || '9' < str_num[0]))
	{
		num = static_cast<float> (str_num[0]);
	}
	else
		num = std::stof(str_num);
	return (num);
}

double	ScalarConverter::convertDouble(std::string str_num)
{
	double	num;

	if (!ScalarConverter::isStringDigit(str_num))
	{
		if (str_num == "inff" || str_num == "inf")
			throw std::out_of_range("double: inf");
		else if (str_num == "-inff" || str_num == "-inf")
			throw std::out_of_range("double: -inf");
		else if (str_num == "nanf" || str_num == "nan")
			throw std::out_of_range("double: nan");
		throw std::invalid_argument("double: nan");
	}
	if (str_num.size() == 1 && (str_num[0] < '0' || '9' < str_num[0]))
	{
		num = static_cast<double> (str_num[0]);
	}
	else
	{
		num = std::stof(str_num);
	}
	return (num);
}

int	main(int argc, char *argv[])
{

	if (argc < 2)
		return (0);
	ScalarConverter::convert(argv[1]);
}
