#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat b("masahito arai", 2);
		b.gradeIncrement();
		b.gradeIncrement();
		b.gradeDecrement();
		std::cout << b << std::endl;
	}
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
