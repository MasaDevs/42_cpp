#ifndef	REPLACESTRING_HPP
#define	REPLACESTRING_HPP
#include <iostream>
#include <string>

class	ReplaceString
{
	public:
		ReplaceString();
		~ReplaceString();
		static std::string	replace(std::string line, std::string s1, std::string s2);
};
#endif

