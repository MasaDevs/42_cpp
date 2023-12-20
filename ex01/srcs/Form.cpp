#include "Form.hpp"

//Constructor
Form::Form() : name_("unknown"), isvalid_(true), issigned_(false), grade_for_sign_(this->grade_lowest_), grade_for_execute_(this->grade_lowest_)
{
	std::cout << "Form Default Constructor" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_for_sign, int grade_for_execute) : name_(name), isvalid_(true), issigned_(false), grade_for_sign_(getProperGrade(grade_for_sign)), grade_for_execute_(getProperGrade(grade_for_execute))
{
	std::cout << "Form Constructor" << std::endl;
	return ;
}

Form::Form(Form const &form) : name_(form.name_), isvalid_(form.isvalid_), issigned_(form.issigned_), grade_for_sign_(form.grade_for_sign_), grade_for_execute_(form.grade_for_execute_)
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

//menber function
int Form::getProperGrade(int grade)
{
	try
	{
		if (this->grade_lowest_ < grade)
			throw Form::GradeTooLowException();
		else if (grade < this->grade_highest_)
			throw Form::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		this->isvalid_ = false;
		return (this->grade_lowest_);
	}
	return (grade);
}

std::string const	&Form::getName(void) const
{
	return (this->name_);
}

int	Form::getGradeForSign(void) const
{
	return (this->grade_for_sign_);
}

int	Form::getGradeForExecute(void) const
{
	return (this->grade_for_execute_);
}

bool	Form::getIsSigned(void) const
{
	return (this->issigned_);
}

void	Form::setIsSigned(bool issigned)
{
	this->issigned_ = issigned;
}

void	Form::beSigned(Bureaucrat const &bureau)
{
	if (!this->isvalid_)
	{
		std::cerr << "this form is invalid. Could'nt be signed." << std::endl;
		return ;
	}
	try
	{
		bureau.signForm(*this);
		this->issigned_ = true;
	}
	catch (Form::GradeTooLowException &e)
	{
		this->issigned_ = false;
	}
	return ;
}

void	Form::checkExecuteGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_execute_ < bureau.getGrade())	
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

//operator
Form	&Form::operator=(Form const &form)
{
	if (this != &form)
	{
		this->isvalid_ = form.isvalid_;
		this->issigned_ = form.issigned_;
	}
	return (*this);
}

std::ostream		& operator << (std::ostream &out, Form const &form)
{
	out << "Form::name: " << form.getName() << " GradeForSign: " << form.getGradeForSign() << " GradeForExecute: " << form.getGradeForExecute();
	return (out);
}