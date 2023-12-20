#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
class AForm;

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		void				signForm(AForm &form) const;
		void				executeForm(AForm &form) const;
		void				gradeIncrement(void);
		void				gradeDecrement(void);
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
		std::string const	name_;
		int					grade_;
		static int const	grade_highest_ = 1;
		static int const	grade_lowest_ = 150;
		int					getProperGrade(int const grade);
		void				setGrade(int grade);
		Bureaucrat(Bureaucrat const &bureau);
		Bureaucrat	&operator=(Bureaucrat const &breau);
};

std::ostream & operator << (std::ostream &out, Bureaucrat const &b);

#endif

