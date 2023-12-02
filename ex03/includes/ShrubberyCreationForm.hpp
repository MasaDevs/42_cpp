#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &form);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();	
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
		void		execute(Bureaucrat const &executor);
};

#endif
