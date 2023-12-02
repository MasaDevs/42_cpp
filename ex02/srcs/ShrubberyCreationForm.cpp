#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Unknown", 145, 137)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm(target, 145,137)
{
		std::cout << "this is Shurubbery default Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : AForm(form.getName(), 145, 137)
{
		std::cout << "this is Shurubbery copy Constructor" << std::endl;
		return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
		std::cout << "this is Shurubbery default Destructor" << std::endl;
		return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
	if ( this != &form )
	{
		*this = form;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executer)
{
	try
	{
		this->checkExecuteGrade(executer);
	
		std::string const	file_name = executer.getName() + "_shrubbery";
		std::ofstream ofs;
		ofs.open(file_name.c_str(), std::ios::out);
		ofs << "       t       " << std::endl;
		ofs << "      tre      " << std::endl;
		ofs << "     treet     " << std::endl;
		ofs << "    treetre    " << std::endl;
		ofs << "   treetrert   " << std::endl;
		ofs << " treetrertree  " << std::endl;
		ofs << "tr etree tr tr " << std::endl;
		ofs << "    treetr     " << std::endl;
		ofs << "    treetr     " << std::endl;
		ofs << "    treetr    " << std::endl;
		ofs << "    treetr    " << std::endl;
		ofs.close();
		executer.executeForm(*this);
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "this executer doesn't fullfill the criteria.." << std::endl;
	}
}

