#include "ReplaceString.hpp"
#include <iostream>
#include <string>

std::string	ReplaceString::replace(std::string line, std::string s1, std::string s2)
{
 	if (s1 == "\0")
		return (line);
	int i = 0;
	while (line.find(s1) != std::string::npos)
	{
		size_t		index = line.find(s1);
		line.erase(index, s1.size());
		line.insert(index, s2);
		i++;
	}
	return (line);
}	

