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
		std::string			const &getName(void) const;
		int					getGrade(void) const;
		void				gradeIncrement(void);
		void				gradeDecrement(void);
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
		std::string const	name_;
		int					grade_;
		static int const	grade_min_ = 1;
		static int const	grade_max_ = 150;
		void				setGrade(int grade);
};

std::ostream & operator << (std::ostream &out, Bureaucrat const &b);

#endif

