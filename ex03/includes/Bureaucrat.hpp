#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class	AForm;

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &bureau);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string			getName(void) const;
		int					getGrade(void) const;
		void				gradeIncrement(void);
		void				gradeDecrement(void);
		void				signForm(bool issigned, std::string const &form_name, std::string const &name = "") const;
		void				executeForm(AForm const &form) const;
		Bureaucrat	&operator=(Bureaucrat const &breau);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		std::string const	name;
		int					grade;
		void				setGrade(int grade);
		static int const	grade_highest = 1;
		static int const	grade_lowest = 150;
};

std::ostream & operator << (std::ostream &out, Bureaucrat const &b);

#endif

