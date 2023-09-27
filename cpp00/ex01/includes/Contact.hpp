#ifndef CONTACT_HPP
#define CONTACT_HPP 
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact(){};
		void						inputData(void);
		void						printTable(int index);
		void						printData(void);
	private:
		void						setData(const std::string (&data)[5], int size);
		std::string					data[5];
};


#endif
