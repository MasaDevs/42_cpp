#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		Intern	masa;
		std::cout << "ShrubberyCreationForm" << std::endl << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				middle("kentaro yoda", 138);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				lower("Naka Ren", 146);
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form1 = masa.makeForm("shrubbery creation", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form2 = masa.makeForm("shrubbery creation", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form3 = masa.makeForm("shrubbery creation", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		//highest
		form1->beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form1->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form1->execute(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2->beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form2->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2->execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3->beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form3->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3->execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		//incurement middle
		middle.gradeIncrement();
		lower.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2->beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form2->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2->execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3->beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form3->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3->execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		delete form1;
		delete form2;
		delete form3;
	}

	{
		Intern	masa;
		std::cout << "RobotomyRequest" << std::endl << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				middle("kentaro yoda", 44);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				lower("Naka Ren", 73);
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form1 = masa.makeForm("robotomy request", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form2 = masa.makeForm("robotomy request", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form3 = masa.makeForm("robotomy request", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		//highest
		form1->beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form1->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form1->execute(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2->beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form2->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2->execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3->beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form3->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3->execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		//incurement middle
		middle.gradeIncrement();
		lower.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2->beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form2->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2->execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3->beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form3->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3->execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;
		delete form1;
		delete form2;
		delete form3;
	}

	{
		Intern masa;
		std::cout << "PresidentialPardonFrom" << std::endl << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;
	
		Bureaucrat				highest("masahito arai", 1);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				middle("kentaro yoda", 6);
		std::cout << "++++++++++++++++++++" << std::endl;

		Bureaucrat				lower("Naka Ren", 26);
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form1 = masa.makeForm("presidential pardon", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form2 = masa.makeForm("presidential pardon", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		AForm* form3 = masa.makeForm("presidential pardon", "My form");
		std::cout << "++++++++++++++++++++" << std::endl;

		//highest
		form1->beSigned(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form1->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form1->execute(highest);
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2->beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form2->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2->execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3->beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form3->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3->execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		//incurement middle
		middle.gradeIncrement();
		lower.gradeIncrement();
		std::cout << "++++++++++++++++++++" << std::endl;

		//middle
		form2->beSigned(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form2->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form2->execute(middle);
		std::cout << "++++++++++++++++++++" << std::endl;

		//lower
		form3->beSigned(lower);
		std::cout << "++++++++++++++++++++" << std::endl;

		std::cout << (form3->getIsSigned() ? "Yes" : "No") << std::endl;
		std::cout << "++++++++++++++++++++" << std::endl;

		form3->execute(lower);
		std::cout << "++++++++++++++++++++" << std::endl;
		delete form1;
		delete form2;
		delete form3;
	}
	std::cout << "this program successfully finished" << std::endl;
	std::cout << "this program successfully finished" << std::endl;
	return (0);
}
