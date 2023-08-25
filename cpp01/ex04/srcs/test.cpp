#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::ifstream ifs(argv[1]);

	if(ifs.fail())
	{
		std::cout << "file does not exist" << std::endl;
	}
	std::string S = std::string(argv[1]);
	std::string R = std::string(".replace");
	
	std::cout << S + R << std::endl;
}
		
	
