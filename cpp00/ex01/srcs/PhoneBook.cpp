#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

void	PhoneBook::add(void)
{
	this->contact[index].input_data();
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::search(void)
{		
	for(int i = 0; i < this->index; i++)	
	{
		this->contact[i].print_data(i);
	}
}

