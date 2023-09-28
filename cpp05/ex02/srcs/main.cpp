#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main(void)
{
	{

		Bureaucrat				bureau1("masahito arai", 150);
		Bureaucrat				bureau2("masahito arai", 138);
		Bureaucrat				bureau3("masahito arai", 1);
		ShrubberyCreationForm	form("My form");
		form.beSigned(bureau1);
		form.execute(bureau1);
		form.beSigned(bureau2);
		form.execute(bureau2);
		std::cout << "OK" << std::endl;
		form.beSigned(bureau3);
		form.execute(bureau3);
	}

	{

	}

//	//constructor check
//	{
//		Form form1("My Form", 20, 40);
//		Form form2;
//		Form form3 = form1;
//		Form form4(form2);
//		std::cout << form1 << std::endl;
//		std::cout << form2 << std::endl;
//		std::cout << form3 << std::endl;
//		std::cout << form4 << std::endl;
//	}
//
//	//range check
//	{
//		Form too_low1("masahito arai", 151, 100);
//		std::cout << too_low1 << std::endl;
//		Form too_low2("masahito arai", 100, 3131);
//		std::cout << too_low2 << std::endl;
//		Form too_high1("masahito arai", 0, 100);
//		std::cout << too_high1 << std::endl;
//		Form too_high2("masahito arai", 100, -1);
//		std::cout << too_high2 << std::endl;
//	}
//	{
//		Bureaucrat	highest("masahito arai", 1);
//		Bureaucrat	lowest("masahito arai", 150);
//		Form		higher("My form", 2, 1);
//		Form		lower("My form", 2, 149);
//
//		higher.beSigned(highest);
//		lower.beSigned(lowest);
//		highest.gradeDecrement();
//		lowest.gradeIncrement();
//		higher.beSigned(highest);
//		lower.beSigned(lowest);
//	}
//	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
