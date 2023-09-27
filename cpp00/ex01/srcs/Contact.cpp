#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

static bool	isNumeric(const std::string &s)
{
	for(unsigned long i = 0; i < s.size(); i++)
		if(!isdigit(s[i]))
			return (false);
	return (true);
}

void	Contact::inputData(void)
{
	std::string const	name[5] = {"first name", "last name", "nickname", "phonenumber", "secret"};
	std::string			data[5];

	for(int i = 0; i < 5; i++)
	{
		std::string line;

		std::cout << name[i] << std::endl;
		while(std::getline(std::cin, line))
		{
			if(i == 3 && !isNumeric(line))
			{
				std::cout << "Error!\nThe phonenumber should be a series of number." << std::endl;
				std::cout << name[i] << std::endl;
				continue;
			}
			if(!line.empty())	
				break;
			std::cout << name[i] << std::endl;
		}
		data[i] = line;
	}
	setData(data, 5);
}

void	Contact::setData(const std::string (&data)[5], int size)
{
	for(int i = 0; i < size; i++)	
		this->data[i] = data[i];
	return ;
}

void	Contact::printTable(int index)
{

	std::cout << '|';
	std::cout << std::right<< std::setw(10) << index + 1;

	for(int j = 0; j < 3; j++)
	{
		std::cout << '|';
		if(10 < this->data[j].size())
		{
			for(int k = 0; k < 9; k++)
				std::cout << this->data[j][k];
			std::cout << ".";
		}
		else
			std::cout << std::right<< std::setw(10) << this->data[j];
	}
	std::cout << '|' << " ";
	std::cout << std::endl;
}

void	Contact::printData(void)
{
	std::string const	name[5] = {"first name", "last name", "nickname", "phonenumber", "secret"};
	for (int i = 0; i < 5; i++)	
		std::cout << name[i] << ": " << this->data[i] << std::endl;
}
