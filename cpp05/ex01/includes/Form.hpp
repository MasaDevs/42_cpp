#ifndef FORM_HPP
#define FORM_HPP
#include "Breaucrat.hpp"
#include <iostream>
#include <string>

class	Form
{
	public:
		Form(std::string name, int grade_for_sign, int grade_for_execute);
		~From();	
		Form				&operator=(const Form &form);
		void				beSigned(Bureaucrat const breau);
		class				GradeTooHighException : public std::exception{};
		class				GradeTooLowException : public std::exception{};
	private:
		std::string			name;
		bool				issigned;
		int					grade_for_sign;
		int					grade_for_execute;
		static int const	grade_min = 1;
		static int const	grade_max = 150;
}
		

#endif
