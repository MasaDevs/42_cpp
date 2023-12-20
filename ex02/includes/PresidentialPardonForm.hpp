#ifndef	PRESIDENTIALPARDON_HPP	
#define PRESIDENTIALPARDON_HPP	
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();	
		void		execute(Bureaucrat const &executor);
	private:
		PresidentialPardonForm(PresidentialPardonForm const &form);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &form);

};

#endif
