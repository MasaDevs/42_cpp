#include "Bureaucrat.hpp"
#include "AForm.hpp"

//operator
std::ostream & operator << (std::ostream &out, Bureaucrat const &b)
{
	out << b.getName() << ", bureaucrat grade "	 << b.getGrade() << ".";
	return (out);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &breau)
{
	this->grade = breau.getGrade();
	return (*this);
}

//constructor
Bureaucrat::Bureaucrat() : name("unknown")
{
	std::cout << "this is Bureaucrat default Constractor" << std::endl;
	setGrade(this->grade_min);
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureau) : name(bureau.name), grade(bureau.grade)
{
	std::cout << "this is Bureaucrat copy Constractor" << std::endl;
	return ;
}
		
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		setGrade(grade);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "this is Bureaucrat default Constracutor" << std::endl;
	return ;
}

//destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "this is Bureaucrat Destracutor" << std::endl;
	return ;
}

//member fucntion
std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < this->grade_min)
		throw GradeTooHighException();
	else if (this->grade_max < grade)
		throw GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat Grade was set" << std::endl;
	return ;
}

void	Bureaucrat::gradeIncrement(void)
{
	try
	{
		setGrade(getGrade() - 1);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::gradeDecrement(void)
{
	try
	{
		setGrade(getGrade() + 1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::signForm(bool issigned, std::string form_name, std::string reason) const
{
	if (issigned)
		std::cout << this->name << " signed " << form_name << std::endl; 
	else
		std::cout << this->name << " couldn't sign " << form_name << " because " << reason << "." << std::endl; 
	return ;
}

void	Bureaucrat::executeForm(Form const &form) const
{
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
	return ;
}

//exception class
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("this grade is too high! must be 1 or over");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("this grade is too low! must be 150 or under");
}
