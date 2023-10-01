#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, float>	mp;
	std::string line;

	mp["400"] = 100;
	mp["200"] = 200;
	mp["300"] = 300;
	while(std::getline(std::cin, line))
	{
		std::map<std::string, float>::iterator iter = mp.upper_bound(line);
		if(iter == mp.end())
		{
			if (line < mp.begin()->first)
			{
				std::cerr << "Error !" << std::endl;
			}
			else if (mp.rbegin()->first < line)
			{
				std::map<std::string, float>::reverse_iterator iter2 = mp.rbegin();
				std::cout << iter2->first<< std::endl;
			}
		}
		else
		{
			if (mp.begin() == iter)
				std::cout << "this is error" << std::endl;
			else
			{
				iter--;
				std::cout << iter->first << std::endl;
			}
				
		}
	}
}
