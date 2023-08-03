#include <iostream>

typedef struct	s_data
{
	int hello;
	char hi;
	char hola;
	int greetings;
}	t_data;

int main()
{
	t_data data;
	data.hello = 3;
	data.hi = 56;
	data.greetings = 1;
	std::cout << sizeof(t_data) << std::endl;
	return (EXIT_SUCCESS);
}
