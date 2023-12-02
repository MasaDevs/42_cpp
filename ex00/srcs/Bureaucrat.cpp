#include "Bureaucrat.hpp"

//operator
std::ostream	&operator << (std::ostream &out, Bureaucrat const &b)
{
	out << b.getName() << ", bureaucrat grade "	 << b.getGrade() << ".";
	return (out);
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &breau)
{
	std::cout << "Copy Operator" << std::endl;
	if (this != &breau)
		this->grade_ = breau.getGrade();
	return (*this);
}

//constructor
Bureaucrat::Bureaucrat() : name_("unknown")
{
	std::cout << "Bureaucrat Default Constractor" << std::endl;
	setGrade(this->grade_max_);
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureau) : name_(bureau.name_), grade_(bureau.grade_)
{
	std::cout << "Bureaucrat Copy Constractor" << std::endl;
	return ;
}
		
Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
	try
	{
		setGrade(grade);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
		this->grade_ = this->grade_max_;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
		this->grade_ = this->grade_max_;
	}
	std::cout << "Bureaucrat Default Constracutor" << std::endl;
	return ;
}

//destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destracutor" << std::endl;
	return ;
}

//member fucntion
std::string	const &Bureaucrat::getName(void) const
{
	return (this->name_);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade_);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < this->grade_min_)
		throw GradeTooHighException();
	else if (this->grade_max_ < grade)
		throw GradeTooLowException();
	this->grade_ = grade;
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
		std::cerr << e.what() << std::endl;
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
		std::cerr << e.what() << std::endl;
	}
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
