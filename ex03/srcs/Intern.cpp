#include "Intern.hpp"

std::string const Intern::form_book_[Intern::num_of_forms_] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Intern::Intern()
{
	std::cout << "Default Constructor" << std::endl;
	return ;
}

Intern::Intern(Intern const &intern)
{
	std::cout << "Default Constructor" << std::endl;
	if (this != &intern)
		*this = intern;
	return ;
}

Intern::~Intern()
{
	std::cout << "Default Destructor" << std::endl;
	return ;
}

Intern	&Intern::operator=(Intern const &intern)
{
	if (this != &intern)
		std::cout << "Copied" << std::endl;
	return (*this);
}

int	Intern::getIndex(std::string const &form_name)
{
	for (int i = 0; i < num_of_forms_; i++)
		if (form_book_[i] == form_name)
			return (i);
	return (-1);
}

AForm	*Intern::makeForm(std::string const &form_name, std::string const &target)
{
	AForm	*form = NULL;
	int		index = getIndex(form_name);

	switch (index)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "form name: " << form_name << " doesn't match this Intern." << std::endl;
			return (form)
	}
	std::cout << "Intern creates" << form_name  << ". "<< std::endl;
	return (form);
}
