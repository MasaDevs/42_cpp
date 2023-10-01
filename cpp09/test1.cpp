#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string line;

    // 最初のwhileループ
    while (!std::cin.eof())
	{
		std::getline(std::cin, line);
        std::cout << line << std::endl;
    }
	if (std::cin.eof())
	{
		std::cout << "Yes" << std::endl;
	}
	std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // EOFが検出された後、std::cinをクリア
    // 2回目のwhileループ
    while (!std::cin.eof()) {
		std::getline(std::cin, line);
        std::cout << line << std::endl;
    }
    return 0;
}

