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
		Form				&operator=(Form const &form);
		std::string const	&getName(void) const;
		int					getGradeForSign(void) const;
		int					getGradeForExecute(void) const;
		int					getProperGrade(int grade);
		bool				getIsSigned(void) const;
		void				setIsSigned(bool  issigned);
		void				beSigned(Bureaucrat const &bureau);
		void				isValid(int const grade) const;
		void				checkSignGrade(Bureaucrat const &bureau);
		void				checkExecuteGrade(Bureaucrat const &bureau);
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
		std::string const	name_;
		bool				isvalid_;
		bool				issigned_;
		int	const 			grade_for_sign_;
		int	const 			grade_for_execute_;
		static int const	grade_highest_ = 1;
		static int const	grade_lowest_ = 150;
};

std::ostream		& operator << (std::ostream &out, Form const &form);
		
#endif
