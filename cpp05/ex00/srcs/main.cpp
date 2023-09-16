#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat b("masahito arai", 2);
		b.gradeDecrement();
		b.gradeDecrement();
		b.gradeDecrement();
	}
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
