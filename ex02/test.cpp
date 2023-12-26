#include <iostream>

int main()
{
	int N = 4;
	int arr[] = {5, 4, 3, 2, 1};

	while(0 < N && arr[N] < arr[--N])
		std::cout << "Yes" << std::endl;
}
