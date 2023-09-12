#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook book;
	std::string line;

	std::cout << "Enter Command: ";
	while(getline(std::cin, line))
	{
		
		if(line == "EXIT")
			break;
		else if(line == "ADD")
			book.add();
		else if(line == "SEARCH")
			book.search();
		std::cout << "Enter Command: ";
	}
	return (0);
}

