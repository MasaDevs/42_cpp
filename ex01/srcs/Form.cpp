#include "Form.hpp"

//Constructor
Form::Form() : name_("unknown"), isvalid_(true), issigned_(false), grade_for_sign_(this->grade_max_), grade_for_execute_(this->grade_max_)
{
	std::cout << "Form Default Constructor" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_for_sign, int grade_for_execute) : name_(name), issigned_(false)
{
	try
	{
		this->isValid(grade_for_sign);
		this->isValid(grade_for_execute);
		this->grade_for_sign_ = grade_for_sign;
		this->grade_for_execute_ = grade_for_execute;
		this->isvalid_ = true;
	}
	catch (GradeTooHighException &e)
	{
		this->isvalid_ = false;
		std::cerr << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		this->isvalid_ = false;
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Form Constructor" << std::endl;
	return ;
}

Form::Form(Form const &form) : name_(form.name_), isvalid_(form.isvalid_), issigned_(false), grade_for_sign_(form.grade_for_sign_), grade_for_execute_(form.grade_for_execute_)
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
	if (this != &form)
	{
		this->isvalid_ = form.isvalid_;
		this->issigned_ = form.issigned_;
		this->grade_for_sign_ = form.grade_for_sign_;
		this->grade_for_execute_= form.grade_for_execute_;
	}
	return (*this);
}

std::ostream		& operator << (std::ostream &out, Form const &form)
{
	out << "Form::name: " << form.getName() << " GradeForSign: " << form.getGradeForSign() << " GradeForExecute: " << form.getGradeForExecute();
	return (out);
}
		
//menber function
std::string const	&Form::getName(void) const
{
	return (this->name_);
}

int					Form::getGradeForSign(void) const
{
	return (this->grade_for_sign_);
}

int					Form::getGradeForExecute(void) const
{
	return (this->grade_for_execute_);
}

bool				Form::getIsSigned(void) const
{
	return (this->issigned_);
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
		this->checkSignGrade(bureau);
		bureau.signForm(true, this->name_);
		this->issigned_ = true;
	}
	catch (Form::GradeTooLowException &e)
	{
		bureau.signForm(false, this->name_, e.what());
		this->issigned_ = false;
	}
	return ;
}

void	Form::isValid(int grade) const
{
	if (this->grade_max_ < grade)
		throw Form::GradeTooLowException();
	else if (grade < this->grade_min_)
		throw Form::GradeTooHighException();
}

void	Form::checkSignGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_sign_ < bureau.getGrade())	
		throw Form::GradeTooLowException();
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

