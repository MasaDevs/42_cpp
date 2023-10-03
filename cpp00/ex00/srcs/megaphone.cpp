#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::locale l = std::locale::classic();
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << std::toupper(argv[i][j], l);
		std::cout << std::endl;
	}
}

