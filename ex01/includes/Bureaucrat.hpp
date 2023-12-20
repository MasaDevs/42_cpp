#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &bureau);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat			&operator=(Bureaucrat const &breau);
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		void				gradeIncrement(void);
		void				gradeDecrement(void);
		void				signForm(bool issigned, std::string const &form_name, std::string const &reason = "") const;
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
		void				setGrade(int grade);
};

std::ostream & operator << (std::ostream &out, Bureaucrat const &b);

#endif

