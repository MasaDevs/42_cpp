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
		std::cout << "++++++++++++++++++++" << std::endl;

		Form form1("My Form", 20, 40);
		std::cout << "++++++++++++++++++++" << std::endl;

		Form form2;
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
		std::cout << std::endl;
	}

	//range check
	{
		std::cout << std::endl;
		std::cout << "Range Check" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Form too_low1("masahito arai", 151, 100);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low1 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Form too_low2("masahito arai", 100, 3131);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low2 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Form too_high1("masahito arai", 0, 100);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high1 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Form too_high2("masahito arai", 100, -1);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high2 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << "Normal Check" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat	highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat	lowest("masahito arai", 150);
		std::cout << "++++++++++++++++++++" << std::endl;

		Form		higher("My form", 2, 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Form		lower("My form", 149, 149);
		std::cout << "++++++++++++++++++++" << std::endl;

		highest.signForm(higher);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (higher.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		lowest.signForm(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (lower.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		highest.gradeDecrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		lowest.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;
		
		higher.beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (higher.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		lower.beSigned(lowest);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (lower.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
	}
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
