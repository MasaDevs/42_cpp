#ifndef CONTACT_HPP
#define CONTACT_HPP 
#include <iostream>
#include <string>
#include <iomanip>

#define	NUM_OF_INFO 5

enum
{
	Firstname,
	Lastname,
	Nickname,
	Phonenumber,
	Secret,
};

class Contact {
	public:
		void						inputData(void);
		void						printTable(int index);
		void						printData(void);
	private:
		void						setData(const std::string (&data)[NUM_OF_INFO]);
		std::string					first_name;
		std::string					last_name;
		std::string					nickname;
		std::string					phonenumber;
		std::string					secret;
};


#endif
