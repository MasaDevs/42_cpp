#include <iostream>

char	toupper(char ch)
{
	if ('a' <= ch && ch <= 'z')
			ch -= ('a' - 'A');
	return (ch);
}

int	main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << toupper(argv[i][j]);
		std::cout << std::endl;
	}
}

