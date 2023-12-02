#ifndef	ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP	
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &form);
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();	
		RobotomyRequestForm &operator=(RobotomyRequestForm const &form);
		void		execute(Bureaucrat const &executor);
};

#endif
