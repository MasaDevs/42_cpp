#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat b("masahito arai", 3);
		std::cout << b << std::endl;
		b--;
		b--;
		b--;
	}
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
