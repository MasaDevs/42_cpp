#include <stdio.h>

void	print(char *arr)
{
	arr[2] = 's';
	printf("%s\n", arr);
}

int main()
{

	char arr[] = "masahito arai";
	print(arr);
	printf("%s\n", arr);
	print("masahito");
}
