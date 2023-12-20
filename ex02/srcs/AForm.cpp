#include "AForm.hpp"
//Constructor
AForm::AForm() : name_("unknown"), isvalid_(true), issigned_(false), grade_for_sign_(this->grade_lowest_), grade_for_execute_(this->grade_lowest_)
{
	std::cout << "AForm Default Constructor" << std::endl;
	return ;
}

AForm::AForm(std::string const &name, int grade_for_sign, int grade_for_execute) : name_(name), issigned_(false)
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
	std::cout << "AForm Constructor" << std::endl;
	return ;
}

AForm::AForm(AForm const &form) : name_(form.name_), isvalid_(form.isvalid_), issigned_(false), grade_for_sign_(form.grade_for_sign_), grade_for_execute_(form.grade_for_execute_)
{
	std::cout << "AForm Copy Constructor" << std::endl;
	return ;
}

//Destructor
AForm::~AForm()
{
	std::cout << "AForm Destructor" << std::endl;
	return ;
}

//operator
AForm	&AForm::operator=(AForm const &form)
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

		
//menber function
std::string const	&AForm::getName(void) const
{
	return (this->name_);
}

int					AForm::getGradeForSign(void) const
{
	return (this->grade_for_sign_);
}

int					AForm::getGradeForExecute(void) const
{
	return (this->grade_for_execute_);
}

bool				AForm::getIsSigned(void) const
{
	return (this->issigned_);
}

void				AForm::beSigned(Bureaucrat const &bureau)
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
	catch (AForm::GradeTooLowException &e)
	{
		bureau.signForm(false, this->name_, e.what());
		this->issigned_ = false;
	}
	return ;
}

void				AForm::isValid(int grade) const
{
	if (this->grade_lowest_ < grade)
		throw AForm::GradeTooLowException();
	else if (grade < this->grade_highest_)
		throw AForm::GradeTooHighException();
}

void				AForm::checkSignGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_sign_ < bureau.getGrade())	
		throw AForm::GradeTooLowException();
}

void	AForm::checkExecuteGrade(Bureaucrat const &bureau)
{
	if (this->grade_for_execute_ < bureau.getGrade())	
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

std::ostream		& operator << (std::ostream &out, AForm const &form)
{
	out << "AForm::name_: " << form.getName() << " GradeForSign: " << form.getGradeForSign() << " GradeForExecute: " << form.getGradeForExecute();
	return (out);
}