#include "ReplaceString.hpp"
#include <iostream>
#include <string>

std::string	ReplaceString::replace(std::string line, std::string s1, std::string s2)
{
	for(unsigned int i = 0; i < line.size(); i++)
	{
		if(line.substr(i, s1.size()) == s1)	
		{
			line = line.substr(0, i) + s2 + line.substr(i + s1.size());
			i = i +  s2.size();
			continue;
		}
	}
	return (line);
}	

