#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <iostream>
#include <iomanip>
#include <string>

static bool	is_num(const std::string &s)
{
	for(unsigned long i = 0; i < s.size(); i++)
		if(!isdigit(s[i]))
			return (false);
	return (true);
}

void	Contact::input_data(void)
{
	std::string	name[5] = {"first name", "last name", "nickname", "phonenumber", "secret"};
	std::string data[5];

	for(int i = 0; i < 5; i++)
	{
		std::string line;

		std::cout << name[i] << std::endl;
		while(std::getline(std::cin, line))
		{
			if(i == 3 && !is_num(line))
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
	set_data(data, 5);
}

void	Contact::set_data(const std::string (&data)[5], int size)
{
	for(int i = 0; i < size; i++)	
		this->data[i] = data[i];
	return ;
}

void	Contact::print_data(int index)
{

	std::cout << '|';
	std::cout << std::left << std::setw(10) << index + 1;

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
			std::cout << std::left << std::setw(10) << this->data[j];
	}
	std::cout << '|' << " ";
	std::cout << std::endl;
}

