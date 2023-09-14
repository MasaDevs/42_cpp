#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string			getName(void) const;
		int					getGrade(void) const;
		class	GradeTooHighException : public std::exception{};
		class	GradeTooLowException : public std::exception{};
		Bureaucrat	&operator=(const Bureaucrat &breau);
		Bureaucrat			operator ++();
		Bureaucrat			operator --();
		const Bureaucrat	operator ++(int);
		const Bureaucrat	operator --(int);
	private:
		std::string const	name;
		int					grade;
		void				setGrade(int grade);
		static int const	grade_min = 1;
		static int const	grade_max = 150;
};

std::ostream & operator << (std::ostream &out, Bureaucrat const &b);

#endif

