#ifndef CONTACT_HPP
#define CONTACT_HPP 
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact(){};
		void	input_data(void);
		void	print_data(int index);
	private:
		void	set_data(const std::string (&data)[5], int size);
		std::string	data[5];
};


#endif
