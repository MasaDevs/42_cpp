#include "ScalarConverter.hpp"

// Private Member Function
std::string	ScalarConverter::to_string(int num)
{
	std::stringstream	stream;

	stream << num;
	return (stream.str());
}
	
std::string	ScalarConverter::convertCharToAsciiNumber(char chr)
{
	return (to_string(static_cast<int>(chr)));
}

double	ScalarConverter::convertStringToDouble(std::string str)
{
	if (str.size() == 1 && !std::isdigit(str[0]))	
		str = convertCharToAsciiNumber(str[0]);
	return (std::stod(str));
}

float	ScalarConverter::convertStringToFloat(std::string str)	
{
	return (static_cast<float>(convertStringToDouble(str)));
}

int	ScalarConverter::convertStringToInt(std::string str)
{
	if (str.size() == 1 && !std::isdigit(str[0]))	
		str = convertCharToAsciiNumber(str[0]);
	return (std::stoi(str));
}

char	ScalarConverter::convertStringToChar(std::string str)
{
	int num = std::stoi(str);
	if (std::isdigit(num)|| !std::isprint(num))
		throw std::out_of_range("Non Dispalyable");
	return (static_cast<char>(num));
}
	
//Public Member Function
void	ScalarConverter::convert(std::string const &target)
{
	std::string str = target;
	try
	{
		std::cout << "char: "  << convertStringToChar(str) << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Impossible"<< std::endl;
	}
	try
	{
		std::cout << "int: " << convertStringToInt(str) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Impossible"<< std::endl;
	}
	try
	{
		std::cout << "float: " << convertStringToFloat(str) << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "unable to Convert"<< std::endl;
	}
	try
	{
		std::cout << "double: " << convertStringToDouble(str) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "unable to Convert"<< std::endl;
	}
}

