#ifndef	FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class	Form
{
	public:
		Form();
		Form(std::string name, int grade_for_sign,  int grade_for_execute);
		~Form();
		Form(Form const &Form);
		Form			&operator=(Form const &form);
		std::string		getName(void) const;
		int				getGradeForSign(void) const;
		int				getGradeForExecute(void) const;
		bool			getIsSigned(void) const;
		void			beSigned(Bureaucrat const &bureau);
		void			checkGrade(int grade) const;
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

std::ostream		& operator << (std::ostream &out, Form const &form);
		
#endif
