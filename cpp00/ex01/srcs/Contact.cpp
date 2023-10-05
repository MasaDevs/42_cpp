#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

static bool	isNumeric(const std::string &s)
{
	for(unsigned long i = 0; i < s.size(); i++)
		if(!std::isdigit(s[i]))
			return (false); return (true);
}

static bool	isValid(std::string line)
{
	for (size_t i = 0; i < line.size(); i++)
		if (!std::isprint(line[i]) || std::isspace(line[i]))
			return (false);
	return (true);
}

void	Contact::inputData(void)
{
	std::string				data[NUM_OF_INFO];
	std::string const       name[NUM_OF_INFO] = {"first name", "last name", "nickname", "phonenumber", "secret"};

	for(int i = 0; i < NUM_OF_INFO; i++)
	{
		std::string line;

		if (std::cin.eof())
			return ;
		std::cout << name[i] << std::endl;
		while(std::getline(std::cin, line))
		{
			if (!isValid(line))	
				std::cout << "Please enter printable character and Don't use any spaces or tabs." << std::endl;
			else if(i == 3 && !isNumeric(line))
				std::cout << "Error!\nThe phonenumber should be a series of number." << std::endl;
			else if (!line.empty())	
				break;
			std::cout << name[i] << std::endl;
		}
		data[i] = line;
	}
	setData(data);
}

void	Contact::setData(const std::string (&data)[NUM_OF_INFO])
{
	this->first_name = data[Firstname];
	this->last_name = data[Lastname];
	this->nickname = data[Nickname];
	this->phonenumber = data[Phonenumber];
	this->secret = data[Secret];
	return ;
}

void	Contact::printTable(int index)
{

	std::cout << '|' << std::right << std::setw(10) << index + 1;
	if (this->first_name.size() <= 10)
		std::cout << '|' << std::right << std::setw(10) << this->first_name;
	else
		std::cout << '|' << std::right << std::setw(10) << this->first_name.substr(0, 9) + ".";
	if (this->last_name.size() <= 10)
		std::cout << '|' << std::right << std::setw(10) << this->last_name;
	else
		std::cout << '|' << std::right << std::setw(10) << this->last_name.substr(0, 9) + ".";
	if (this->nickname.size() <= 10)
		std::cout << '|' << std::right << std::setw(10) << this->nickname;
	else
		std::cout << '|' << std::right << std::setw(10) << this->nickname.substr(0, 9) + ".";
	std::cout << '|' << " ";
	std::cout << std::endl;
}

void	Contact::printData(void)
{ std::string const       name[NUM_OF_INFO] = {"first name", "last name", "nickname", "phonenumber", "secret"};
	std::cout << name[Firstname] << ": " << this->first_name << std::endl;
	std::cout << name[Lastname] << ": " << this->last_name << std::endl;
	std::cout << name[Nickname] << ": " << this->nickname << std::endl;
	std::cout << name[Phonenumber] << ": " << this->phonenumber << std::endl;
	std::cout << name[Secret] << ": " << this->secret << std::endl;
	return ;
}
