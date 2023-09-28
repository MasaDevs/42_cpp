#include "Form.hpp"

//Constructor
Form::Form() : name("unknown"), issigned(false), grade_for_sign(this->grade_max), grade_for_execute(this->grade_max)
{
	std::cout << "Form Default Constructor" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_for_sign, int grade_for_execute) : name(name), issigned(false)
{
	try
	{
		this->isvalid(grade_for_sign);
		this->isvalid(grade_for_execute);
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
	std::cout << "Form Constructor" << std::endl;
	return ;
}

Form::Form(Form const &form) : name(form.name), issigned(false), grade_for_sign(form.grade_for_sign), grade_for_execute(form.grade_for_execute)
{
	std::cout << "Form Copy Constructor" << std::endl;
	return ;
}

//Destructor
Form::~Form()
{
	std::cout << "Form Destructor" << std::endl;
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
	try
	{
		this->checkSignGrade(bureau);
		this->issigned = true;
		bureau.signForm(true, this->name, "dummy");
	}
	catch (Form::GradeTooLowException &e)
	{
		bureau.signForm(false, this->name, e.what());
		this->issigned = false;
	}
	return ;
}

void	Form::isvalid(int grade) const
{
	if (this->grade_max < grade)
		throw Form::GradeTooLowException();
	else if (grade < this->grade_min)
		throw Form::GradeTooHighException();
}

void	Form::checkSignGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_sign > bureau.getGrade())	
		throw Form::GradeTooLowException();
}

void	Form::checkExecuteGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_execute > bureau.getGrade())	
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("this grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("this grade is too high!");
}

