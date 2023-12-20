#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	//constructor check
	{
		std::cout << std::endl;
		std::cout << "Constructor Check" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
		
		Bureaucrat bureau1("masahito arai", 149);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat bureau2;
		std::cout << "++++++++++++++++++++" << std::endl;
		
		Bureaucrat bureau4(bureau1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat bureau3 = bureau1;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat bureau5;
		bureau5 = bureau1;
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << bureau1 << std::endl;
		std::cout << bureau2 << std::endl;
		std::cout << bureau3 << std::endl;
		std::cout << bureau4 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
		std::cout << std::endl;
	}
	//increment check
	{
		std::cout << std::endl;
		std::cout << "Increment Check" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat too_high("masahito arai", 3);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		too_high.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		too_high.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
		too_high.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
		
	}
	//decrement check
	{
		std::cout << std::endl;
		std::cout << "Decrement Check" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat too_low("masahito arai", 149);
		std::cout << "++++++++++++++++++++" << std::endl;
		
		std::cout << too_low<< std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		too_low.gradeDecrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low<< std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		too_low.gradeDecrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low<< std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		too_low.gradeDecrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low<< std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
	}
	//range check
	{
		std::cout << std::endl;
		std::cout << "Range Check" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat too_low1("masahito arai", 151);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low1 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat too_low2("masahito arai", 3131);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_low2 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat too_high1("masahito arai", 0);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high1 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat too_high2("masahito arai", -1);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << too_high2 << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
	}
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
