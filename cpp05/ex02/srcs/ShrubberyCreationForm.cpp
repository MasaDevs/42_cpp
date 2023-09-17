#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Unknown", 145, 137);
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target);
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : AForm(name, 145, 137)
{
		std::cout << "this is Shurubbery copy Constructor" << std::endl;
		return ;
}


ShrubberyCreationForm::~ShrubberyCreationForm();	
{
		std::cout << "this is Shurubbery default Destructor" << std::endl;
		return ;
}

SShrubberyCreationForm	&hrubberyCreationForm::ShrubberyCreationFrom &operator=(ShrubberyCreationForm const &form)
{
	(void) form;
	return ;
}

void	SShrubberyCreationForm::execute(Bureaucrat const &executer)
{
	try
	{
		exec(executer);
	}
	catch ()
	{

