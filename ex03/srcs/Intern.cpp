#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Constructor" << std::endl;
	return ;
}

Intern::Intern(Intern const &intern)
{
	std::cout << "Default Constructor" << std::endl;
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

Form	*Intern::makeForm(std::string form_name, std::string target)
{
	Form	*form = NULL

	return (form);
}
