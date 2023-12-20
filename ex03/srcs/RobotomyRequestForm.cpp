#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("Unknown", 72, 45)
{
		std::cout << "Robotomy default Constructor" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm(target, 72,45)
{
		std::cout << "Robotomy Constructor" << std::endl;
		return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : AForm(form.getName(), 72, 45)
{
		std::cout << "Robotomy Copy Constructor" << std::endl;
		return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		std::cout << "Robotomy Destructor" << std::endl;
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
		std::srand(std::time(NULL));
		if (std::rand() % 2)
			std::cout << "this target has been robotomized !" << std::endl;
		else
			std::cout << "this target couldn't be robotomized !" << std::endl;
		//create file and write ascii tree
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "this executer doesn't fullfill the criteria.." << std::endl;
	}
}

