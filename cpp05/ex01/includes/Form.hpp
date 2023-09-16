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
		Form	&operator=(Form const &form);
		void	besigned(Bureaucrat const &bureau);
		void	check_grade(int grade);
		void	get_info(void);
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

#endif
