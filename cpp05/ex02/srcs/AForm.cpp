#include "AForm.hpp"

//Constructor
AForm::AForm() : name("unknown"), issigned(false), grade_for_sign(this->grade_max), grade_for_execute(this->grade_max)
{
	std::cout << "this is form constructor" << std::endl;
	return ;
}

AForm::AForm(std::string name, int grade_for_sign, int grade_for_execute) : name(name), issigned(false)
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
	std::cout << "this is form constructor" << std::endl;
	return ;
}

AForm::AForm(AForm const &form) : name(form.name), issigned(false), grade_for_sign(form.grade_for_sign), grade_for_execute(form.grade_for_execute)
{
	return ;
}

//Destructor
AForm::~AForm()
{
	std::cout << "this is form destructor" << std::endl;
	return ;
}

//operator
AForm	&AForm::operator=(AForm const &form)
{
	this->grade_for_sign = form.grade_for_sign;
	this->grade_for_execute= form.grade_for_execute;
	return (*this);
}

std::ostream		& operator << (std::ostream &out, AForm const &form)
{
	out << "AForm::name: " << form.getName() << " GradeForSign: " << form.getGradeForSign() << " GradeForExecute: " << form.getGradeForExecute();
	return (out);
}
		
//menber function
std::string		AForm::getName(void) const
{
	return (this->name);
}

int				AForm::getGradeForSign(void) const
{
	return (this->grade_for_sign);
}

int				AForm::getGradeForExecute(void) const
{
	return (this->grade_for_execute);
}

bool			AForm::getIsSigned(void) const
{
	return (this->issigned);
}

void	AForm::beSigned(Bureaucrat const &bureau)
{
	try
	{
		this->checkSignGrade(bureau);
		this->issigned = true;
		bureau.signForm(true, this->name, "dummy");
	}
	catch (AForm::GradeTooLowException &e)
	{
		bureau.signForm(false, this->name, e.what());
		this->issigned = false;
	}
	return ;
}

void	AForm::isvalid(int grade) const
{
	if (this->grade_max < grade)
		throw AForm::GradeTooLowException();
	else if (grade < this->grade_min)
		throw AForm::GradeTooHighException();
}

void	AForm::checkSignGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_sign <  bureau.getGrade())	
		throw AForm::GradeTooLowException();
}

void	AForm::checkExecuteGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_execute < bureau.getGrade())	
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("this grade is too low!");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("this grade is too high!");
}

