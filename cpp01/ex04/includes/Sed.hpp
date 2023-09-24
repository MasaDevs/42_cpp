#ifndef	SED_HPP
#define	SED_HPP
#include <iostream>
#include <fstream>
#include <string>
#include "ReplaceString.hpp"


class	Sed
{
	public:
		Sed(std::string file_name, std::string s1, std::string s2);
		~Sed();
		void	editStream(void);
	private:
		std::string input_file_name;
		std::string s1;
		std::string s2;

};

#endif
