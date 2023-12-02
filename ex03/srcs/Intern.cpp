#include "Intern.hpp"

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

AForm	*Intern::makeForm(std::string const &form_name, std::string const &target)
{
	AForm	*form = NULL

	return (form);
}
