#ifndef	ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP	
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &form);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();	
		RobotomyRequestForm &operator=(RobotomyRequestForm const &form);
		void		execute(Bureaucrat const &executor);
};

#endif
