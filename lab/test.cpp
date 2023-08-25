#include <iostream>
#include <memory>
#include <vector>

std::vector<int> *test(int N)
{
	std::vector<int> *T = new std::vector<int>(N, 0);
	return (T);
}

int main() {
	std::vector<int> *T = test(10);
	std::cout << T[5] << std::endl;
    return 0;
}

