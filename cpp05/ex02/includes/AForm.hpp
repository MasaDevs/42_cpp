#ifndef	FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class	AForm
{
	public:
		AForm();
		AForm(std::string name, int grade_for_sign,  int grade_for_execute);
		~AForm();
		AForm(AForm const &AForm);
		AForm			&operator=(AForm const &form);
		virtual void	execute(Bureaucrat const &executor) = 0;
		std::string		getName(void) const;
		int				getGradeForSign(void) const;
		int				getGradeForExecute(void) const;
		bool			getIsSigned(void) const;
		void			beSigned(Bureaucrat const &bureau);
		void			isvalid(int grade) const;
		void			checkSignGrade(Bureaucrat const &bureau);
		void			checkExecuteGrade(Bureaucrat const &bureau);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	private:
		std::string const	name;
		bool				issigned;
		int					grade_for_sign;
		int					grade_for_execute;
		static int const	grade_min = 1;
		static int const	grade_max = 150;
};

std::ostream		& operator << (std::ostream &out, AForm const &form);
		
#endif
