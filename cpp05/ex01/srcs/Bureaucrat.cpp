#include "Bureaucrat.hpp"

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

Bureaucrat	Bureaucrat::operator++()
{
	try
	{
		setGrade(this->grade + 1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "this grade is too low !" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "this grade is too high !" << std::endl;
	}
	return (*this);
}

Bureaucrat	Bureaucrat::operator--()
{
	try
	{
		setGrade(this->grade - 1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "this grade is too low !" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "this grade is too high !" << std::endl;
	}
	return (*this);
}

const Bureaucrat	Bureaucrat::operator ++(int)
{
	Bureaucrat	result = *this;
	try
	{
		setGrade(this->grade + 1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "this grade is too low !" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "this grade is too high !" << std::endl;
	}
	return (result);
}

const Bureaucrat	Bureaucrat::operator --(int)
{
	Bureaucrat	result = *this;
	try
	{
		setGrade(this->grade - 1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "this grade is too low !" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "this grade is too high !" << std::endl;
	}
	return (result);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		setGrade(grade);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "this grade is too low !" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "this grade is too high !" << std::endl;
	}
	std::cout << "this is Bureaucrat Constracutor" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "this is Bureaucrat Destracutor" << std::endl;
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < this->grade_min)
		throw GradeTooLowException();
	else if (this->grade_max < grade)
		throw GradeTooHighException();
	this->grade = grade;
	std::cout << "Bureaucrat Grade was set" << std::endl;
	return ;
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

