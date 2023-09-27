#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
	this->index = 0;
}

void	PhoneBook::add(void)
{
	this->contact[this->index].inputData();
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::search(void)
{		
	std::string		line;
	int				index = 0;

	for(int i = 0; i < 8; i++)	
	{
		this->contact[i].printTable(i);
	}
	std::cout << "Number: ";
	while (std::getline(std::cin, line))
	{
		if (line.size() == 1 && '1' <= line[0]  && line[0] <= '8')
		{
			index = line[0] - '1';
			break;
		}
		std::cout << "Please input number between 1 and 8" << std::endl;
		std::cout << "Number: ";
	}
	this->contact[index].printData();
}

