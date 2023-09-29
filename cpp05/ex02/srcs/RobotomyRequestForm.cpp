#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("Unknown", 72, 45)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72,45)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : Form(form.getName(), 72, 45)
{
		std::cout << "this is Shurubbery copy Constructor" << std::endl;
		return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		std::cout << "this is Shurubbery default Destructor" << std::endl;
		return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &form)
{
	if ( this != &form )
	{
		*this = form;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executer)
{
	try
	{
		this->checkExecuteGrade(executer);
		std::cout << "ddddddddddddddddddddddddd!!" <<std::endl;
		if (rand() % 2)
			std::cout << "this target has been robotomized !" << std::endl;
		else
			std::cout << "this target couldn't be robotomized !" << std::endl;
		//create file and write ascii tree
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "this executer doesn't fullfill the criteria.." << std::endl;
	}
}

