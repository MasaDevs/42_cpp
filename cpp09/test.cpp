#include <iostream>
#include <string>

int main()
{
	std::string line;
	while(std::getline(std::cin, line))
	{
		std::cout << line << std::endl;
	}
	std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while(std::getline(std::cin, line))
	{
		std::cout << line << std::endl;
	}
}
