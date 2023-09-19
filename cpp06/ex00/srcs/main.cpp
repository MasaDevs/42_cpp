#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>


void	ScalarConverter::convert(std::string num)
{
	ScalarConverter::convertChar(num);
	ScalarConverter::convertInt(num);
	ScalarConverter::convertFloat(num);
	ScalarConverter::convertDouble(num);
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
void	ScalarConverter::convertChar(std::string str_num)
{
	try
	{
		if (str_num.size() != 1)
				throw std::invalid_argument("impossible");
		else if (str_num[0] < 32 || 126 < str_num[0])
				throw std::out_of_range("Non displayable");
		std::cout << "char: " << '\''<<  static_cast<char> (str_num[0]) << '\''<< std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "char: " << e.what() << std::endl;
	}
}
		
void	ScalarConverter::convertInt(std::string str_num)
{
	try
	{
		int		num;
		if (!ScalarConverter::isStringDigit(str_num))
			throw std::invalid_argument("Impossible");
		if (str_num.size() == 1 && (str_num[0] < '0' || '9' < str_num[0]))
			std::cout << "int: " << static_cast<int> (str_num[0]) << std::endl;
		else
		{
			num = std::stoi(str_num);
			std::cout << "int: " << num << std::endl;
		}
		
	}
	catch (std::out_of_range &e)
	{
		std::cout << "int: Impossible" << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "int: Impossible" << std::endl;
	}
}

void	ScalarConverter::convertFloat(std::string str_num)
{
	try
	{
		float	num;
		if (!ScalarConverter::isStringDigit(str_num))
		{
			if (str_num == "inff" || str_num == "inf")
				throw std::out_of_range("inff");
			else if (str_num == "-inff" || str_num == "-inf")
				throw std::out_of_range("-inff");
			else if (str_num == "nanf" || str_num == "nan")
				throw std::out_of_range("nanf");
			throw std::invalid_argument("nan");
		}
		if (str_num.size() == 1)
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float> (str_num[0]) << "f"<< std::endl;
		else
		{
			num = std::stof(str_num);
			std::cout << "float: " <<  std::fixed << std::setprecision(ScalarConverter::countDigitsUnderDecimalPoint(str_num)) << num << "f"<< std::endl;
		}
	}
	catch (std::out_of_range &e)
	{
		std::cout << "float: " << e.what() << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "float: nanf" << std::endl;
	}
}

void	ScalarConverter::convertDouble(std::string str_num)
{
	try
	{
		double num;
		if (!ScalarConverter::isStringDigit(str_num))
		{
			if (str_num == "inff" || str_num == "inf")
				throw std::out_of_range("inf");
			else if (str_num == "-inff" || str_num == "-inf")
				throw std::out_of_range("-inf");
			else if (str_num == "nanf" || str_num == "nan")
				throw std::out_of_range("nan");
			throw std::invalid_argument("nan");
		}
		if (str_num.size() == 1)
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double> (str_num[0]) << std::endl;
		else
		{
			num = std::stof(str_num);
			std::cout << "double: " <<  std::fixed << std::setprecision(ScalarConverter::countDigitsUnderDecimalPoint(str_num)) << num << std::endl;
		}
	}
	catch (std::out_of_range &e)
	{
		std::cout << "double: " << e.what() << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << "double: nanf" << std::endl;
	}
}

int main()
{
	std::string	name;

	while(std::getline(std::cin, name))
	{
		ScalarConverter::convert(name);
	}
}
