#include "Bureaucrat.hpp"

//operator
std::ostream & operator << (std::ostream &out, Bureaucrat const &b)
{
	out << b.getName() << ", bureaucrat grade "	 << b.getGrade() << ".";
	return (out);
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &breau)
{
	std::cout << "Copy Operator Called" << std::endl;
	if (this != &breau)
		this->grade = breau.getGrade();
	return (*this);
}

//constructor
Bureaucrat::Bureaucrat() : name("unknown")
{
	std::cout << "Bureaucrat Default Constractor" << std::endl;
	setGrade(this->grade_min);
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureau) : name(bureau.name), grade(bureau.grade)
{
	std::cout << "Bureaucrat Copy Constractor" << std::endl;
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
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
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
