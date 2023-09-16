#include "Form.hpp"

Form::Form() : name("unknown"), issigned(false), grade_for_sign(this->grade_max), grade_for_execute(this->grade_max)
{
	std::cout << "this is form constructor" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_for_sign, int grade_for_execute) : name(name), issigned(false), grade_for_sign(grade_for_sign), grade_for_execute(grade_for_execute)
{
	// must judge the validity of grade later
	std::cout << "this is form constructor" << std::endl;
	return ;
}

Form::~Form()
{
	std::cout << "this is form destructor" << std::endl;
	return ;
}

Form::Form(Form const &form) : name(form.name), issigned(false), grade_for_sign(form.grade_for_sign), grade_for_execute(form.grade_for_execute)
{
	return ;
}

Form	&Form::operator=(Form const &form)
{
	(void) form;
	return (*this);
}

void	Form::besigned(Bureaucrat const &bureau)
{
	if (bureau.getGrade() <= this->grade_for_sign)
		this->issigned = true;
	return ;
}

void	Form::check_grade(int grade)
{
	if (this->grade_max < grade)
		throw Form::GradeTooLowException();
	else if (grade < this->grade_min)
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("this grade is too low! must be 150 or under");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("this grade is too high! must be 1 or over");
}

