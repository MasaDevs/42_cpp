#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("Unknown", 25, 5)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25,5)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : Form(form.getName(), 25, 5)
{
		std::cout << "this is Shurubbery copy Constructor" << std::endl;
		return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
		std::cout << "this is Shurubbery default Destructor" << std::endl;
		return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &form)
{
	if ( this != &form )
	{
		*this = form;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executer)
{
	try
	{
		this->checkExecuteGrade(executer);
		std::cout << "Execute!!" <<std::endl;
		std::cout << this->getName() << "has been pardoned by Zaphod Beeblebrox."  << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "this executer doesn't fullfill the criteria.." << std::endl;
	}
}

