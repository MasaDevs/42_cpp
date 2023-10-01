#include <iostream>
#include "Database.hpp"

int	main(int argc, char *argv[])
{
	Database database("data.csv");

	for (int i = 1; i < argc; i++)	
	{
		if(database.insertData(argv[i], 100))
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	database.printData();
}


