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
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();	
		void		execute(Bureaucrat const &executor);
	private:
		RobotomyRequestForm(RobotomyRequestForm const &form);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &form);

};

#endif
