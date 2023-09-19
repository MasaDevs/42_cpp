#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

void	PhoneBook::add(void)
{
	this->contact[index].inputData();
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::search(void)
{		
	for(int i = 0; i < 8; i++)	
	{
		this->contact[i].printData(i);
	}
}

