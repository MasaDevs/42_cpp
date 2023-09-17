#include "Form.hpp"

//Constructor
Form::Form() : name("unknown"), issigned(false), grade_for_sign(this->grade_max), grade_for_execute(this->grade_max)
{
	std::cout << "this is form constructor" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_for_sign, int grade_for_execute) : name(name), issigned(false)
{
	try
	{
		this->checkGrade(grade_for_sign);
		this->checkGrade(grade_for_execute);
		this->grade_for_sign = grade_for_sign;
		this->grade_for_execute = grade_for_execute;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "this is form constructor" << std::endl;
	return ;
}

Form::Form(Form const &form) : name(form.name), issigned(false), grade_for_sign(form.grade_for_sign), grade_for_execute(form.grade_for_execute)
{
	return ;
}

//Destructor
Form::~Form()
{
	std::cout << "this is form destructor" << std::endl;
	return ;
}

//operator
Form	&Form::operator=(Form const &form)
{
	this->grade_for_sign = form.grade_for_sign;
	this->grade_for_execute= form.grade_for_execute;
	return (*this);
}

std::ostream		& operator << (std::ostream &out, Form const &form)
{
	out << "Form::name: " << form.getName() << " GradeForSign: " << form.getGradeForSign() << " GradeForExecute: " << form.getGradeForExecute();
	return (out);
}
		
//menber function
std::string		Form::getName(void) const
{
	return (this->name);
}

int				Form::getGradeForSign(void) const
{
	return (this->grade_for_sign);
}

int				Form::getGradeForExecute(void) const
{
	return (this->grade_for_execute);
}

bool			Form::getIsSigned(void) const
{
	return (this->issigned);
}

void	Form::beSigned(Bureaucrat const &bureau)
{
	if (bureau.getGrade() <= this->grade_for_sign)
	{
		this->issigned = true;
		bureau.signForm(true, this->name, "dummy");
	}
	else
	{
		bureau.signForm(false, this->name, "this bureaucrat doesn't fulfill the criteria.");
	}
	return ;
}

void	Form::checkGrade(int grade) const
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

