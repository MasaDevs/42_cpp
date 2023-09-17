#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Unknown", 145, 137)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145,137)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : AForm(form.getName(), 145, 137)
{
		std::cout << "this is Shurubbery copy Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
		std::cout << "this is Shurubbery default Destructor" << std::endl;
		return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
	if ( this != &form )
	{
		*this = form;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executer)
{
	try
	{
		this->checkExecuteGrade(executer);
		std::cout << "Execute!!" <<std::endl;
		//create file and write ascii tree
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "this executer doesn't fullfill the criteria.." << std::endl;
	}
}

