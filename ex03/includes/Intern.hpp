#ifndef	INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		AForm	*makeForm(std::string const &class_name, std::string const &target);
		Intern	&operator=(Intern const &intern);
	private:
};
#endif

