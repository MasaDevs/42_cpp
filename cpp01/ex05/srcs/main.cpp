#include "Harl.hpp"
#include <iostream>

int main()
{
	std::string		line;
	Harl			harl;
	while(std::cout << "input>>" && std::getline(std::cin, line))
	{
		harl.complain(line);
	}
}
