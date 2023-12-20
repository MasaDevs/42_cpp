#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(void)
{
	{
		std::cout << "ShrubberyCreationForm" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				middle("kentaro yoda", 138);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				lower("Naka Ren", 146);
		std::cout << "++++++++++++++++++++" << std::endl;

		ShrubberyCreationForm	form1("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		ShrubberyCreationForm	form2("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		ShrubberyCreationForm	form3("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		//highest
		form1.beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form1.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form1.execute(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2.beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form2.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2.execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3.beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form3.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3.execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		//incurement middle
		middle.gradeIncrement();
		lower.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;
		//middle
		form2.beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form2.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2.execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;
		//lower
		form3.beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form3.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3.execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;
	}

	{
		std::cout << "RobotomyRequest" << std::endl;
		//definition
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				middle("kentaro yoda", 44);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				lower("Naka Ren", 73);
		std::cout << "++++++++++++++++++++" << std::endl;

		RobotomyRequestForm		form1("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		RobotomyRequestForm		form2("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		RobotomyRequestForm		form3("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		//highest
		form1.beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form1.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form1.execute(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2.beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form2.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2.execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3.beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form3.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3.execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		//incurement middle
		middle.gradeIncrement();
		lower.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2.beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form2.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2.execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;
		//lower

		form3.beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form3.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3.execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;
	}

	{
		std::cout << "PresidentialPardonFrom" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				middle("kentaro yoda", 6);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				lower("Naka Ren", 26);
		std::cout << "++++++++++++++++++++" << std::endl;

		PresidentialPardonForm		form1("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		PresidentialPardonForm		form2("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		PresidentialPardonForm		form3("My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		//highest
		form1.beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form1.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form1.execute(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2.beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form2.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2.execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3.beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form3.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3.execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		//incurement middle
		middle.gradeIncrement();
		lower.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;
		//middle
		form2.beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form2.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2.execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3.beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		if (form3.getIsSigned()) std::cout << "Yes" << std::endl;
		else	std::cout << "No" << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3.execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;
	}
	std::cout << "this program successfully finished" << std::endl;
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
