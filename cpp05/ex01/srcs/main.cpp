#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	//constructor check
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Constructor Check" << std::endl;
		Form form1("My Form", 20, 40);
		Form form2;
		Form form3 = form1;
		Form form4(form2);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		std::cout << form4 << std::endl;
	}

	//range check
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Range Check" << std::endl;
		Form too_low1("masahito arai", 151, 100);
		std::cout << too_low1 << std::endl;
		Form too_low2("masahito arai", 100, 3131);
		std::cout << too_low2 << std::endl;
		Form too_high1("masahito arai", 0, 100);
		std::cout << too_high1 << std::endl;
		Form too_high2("masahito arai", 100, -1);
		std::cout << too_high2 << std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Normal Check" << std::endl;
		Bureaucrat	highest("masahito arai", 1);
		Bureaucrat	lowest("masahito arai", 150);
		Form		higher("My form", 2, 1);
		Form		lower("My form", 2, 149);

		higher.beSigned(highest);
		lower.beSigned(lowest);
		highest.gradeDecrement();
		lowest.gradeIncrement();
		higher.beSigned(highest);
		lower.beSigned(lowest);
	}
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
