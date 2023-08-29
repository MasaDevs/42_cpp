#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <string>

class	PhoneBook {
	public:
		PhoneBook() {this->index = 0;}
		void add(void);
		void search(void);
	private:
		Contact	contact[8];
		int		index;
};

#endif
