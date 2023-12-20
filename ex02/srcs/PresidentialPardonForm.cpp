#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("Unknown", 25, 5)
{
		std::cout << "Presidential Default Constructor" << std::endl;
		return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm(target, 25,5)
{
		std::cout << "Presidential Constructor" << std::endl;
		return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : AForm(form.getName(), 25, 5)
{
		std::cout << "Presidential Copy Constructor" << std::endl;
		return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
		std::cout << "Presidential Destructor" << std::endl;
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
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "this executer doesn't fullfill the criteria.." << std::endl;
	}
}

