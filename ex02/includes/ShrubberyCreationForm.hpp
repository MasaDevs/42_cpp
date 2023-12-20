#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm();	
		void		execute(Bureaucrat const &executor);
	private:
		ShrubberyCreationForm(ShrubberyCreationForm const &form);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
};

#endif
