#include "ScalarConverter.hpp"

//private function
ScalarType	ScalarConverter::judgeScalarType(std::string const &target)
{
	bool	is_delimiter = false;

	if (target.size() == 1 && !std::isdigit(target[0]))
		return (CHAR);
	if (target == "nan" || target == "inf" || target == "-inf")
		return (DOUBLE);
	if (target == "nanf" || target == "inff" || target == "-inff")
		return (FLOAT);
	for (std::string::size_type i = target[0] == '-' ? 1 : 0; i < target.size(); i++)
	{
		if (std::isdigit(target[i]))
			continue;
		else if (target[i] == '.' && !is_delimiter)
		{
			is_delimiter = true;
			continue;
		}
		else if (target[i] == 'f' && i + 1 == target.size() && is_delimiter)
		{
			return (FLOAT);
		}
		return (ERROR); }
	return (is_delimiter ? DOUBLE : INT);
}

template<typename T>
bool	ScalarConverter::isPrintable(T num)
{
	return (32 <= num && num <= 126);
}

template <typename T>
void	ScalarConverter::convertType(T scalar_target)
{
	std::cout << "char: " << (isPrintable(scalar_target) ? std::string(1, scalar_target) : "No displayable") << std::endl;
	std::cout << "int: " << static_cast<int>(scalar_target) << std::endl;
	std::cout << "float: " << static_cast<float>(scalar_target) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(scalar_target) << std::endl;
}

void	ScalarConverter::convertType(float scalar_target)
{
	if (scalar_target!= scalar_target || std::numeric_limits<float>::max() < scalar_target || scalar_target < std::numeric_limits<float>::min())
	{
		std::cout << "char: impossible" << std::endl;;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "char: " << (isPrintable(scalar_target) ? std::string(1, scalar_target) : "No displayable") << std::endl;
		std::cout << "int: " << static_cast<int>(scalar_target) << std::endl;
	}
	std::cout << "float: " << static_cast<float>(scalar_target) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(scalar_target) << std::endl;
}

void	ScalarConverter::convertType(double scalar_target)
{
	if (scalar_target!= scalar_target || std::numeric_limits<float>::max() < scalar_target || scalar_target < std::numeric_limits<float>::min())
	{
		std::cout << "char: impossible" << std::endl;;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "char: " << (isPrintable(scalar_target) ? std::string(1, scalar_target) : "No displayable") << std::endl;
		std::cout << "int: " << static_cast<int>(scalar_target) << std::endl;
	}
	std::cout << "float: " << static_cast<float>(scalar_target) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(scalar_target) << std::endl;
}


void	ScalarConverter::convert(std::string target)	
{
	try
	{

		switch (judgeScalarType(target)) {
			case CHAR:
				std::cout << "type: char" << std::endl;
				return (convertType(target[0]));
			case INT:
				std::cout << "type: int" << std::endl;
				return (convertType(std::stoi(target)));
			case FLOAT:
				std::cout << "type: float" << std::endl;
				return (convertType(std::stof(target)));
			case DOUBLE:
				std::cout << "type: double" << std::endl;
				return (convertType(std::stod(target)));
			case ERROR:
				std::cout << "type: error" << std::endl;
				throw std::invalid_argument("invalid argument");
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
