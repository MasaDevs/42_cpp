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
		AForm(std::string const &name, int grade_for_sign,  int grade_for_execute);
		virtual ~AForm();
		std::string const	&getName(void) const;
		int					getGradeForSign(void) const;
		int					getGradeForExecute(void) const;
		int					getProperGrade(int grade);
		bool				getIsSigned(void) const;
		void				setIsSigned(bool  issigned);
		virtual	void		execute(Bureaucrat const &executer) = 0;
		void				beSigned(Bureaucrat const &bureau);
		bool				getIsValid(void) const;
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
		AForm(AForm const &AForm);
		AForm				&operator=(AForm const &form);
};

std::ostream		& operator << (std::ostream &out, AForm const &form);
		
#endif
