#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &form);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();	
		ShrubberyCreationFrom &operator=(ShrubberyCreationForm const &form);
		void		execute(Bureaucrat const &executor)	override;
}

#endif
