#include "Bureaucrat.hpp"
//constructor
Bureaucrat::Bureaucrat() : name_("unknown"), grade_(this->grade_lowest_)
{
	std::cout << "Bureaucrat Default Constractor" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureau) : name_(bureau.name_), grade_(bureau.grade_)
{
	std::cout << "Bureaucrat Copy Constractor" << std::endl;
	return ;
}
		
Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(getProperGrade(grade))
{
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
int	Bureaucrat::getProperGrade(int const grade)
{
	try 
	{
		if (grade < this->grade_highest_)
			throw GradeTooHighException();
		else if (this->grade_lowest_ < grade)
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (this->grade_lowest_);
	}
	return (grade);
}

std::string	const	&Bureaucrat::getName(void) const
{
	return (this->name_);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade_);
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