#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>


int main(int argc, char *argv[]) {

	std::vector<int> before_vec, after_vec;
	std::list<int> before_lst, after_lst;
	for (int i = 1; i < argc; i++) {

		std::string s = std::string(argv[i]);
		std::stringstream ss;
		int num;
		for (size_t j = 0; j < s.size(); j++)
			if (!std::isdigit(s[j]))
				throw std::invalid_argument("the argument must be positive integer");
		ss << s;
		ss >> num;
		before_vec.push_back(num);
		before_lst.push_back(num);
	}

	after_vec = PmergeMe::mergeInsertionSort(before_vec);
	after_lst= PmergeMe::mergeInsertionSort(before_lst);

	{
		std::cout << "Before:	";
		for (size_t i = 0; i < before_vec.size(); i++)
			std::cout << before_vec[i] << " ";
		std::cout << std::endl;
		std::cout << "After:	";
		for (size_t i = 0; i < after_vec.size(); i++)
			std::cout << after_vec[i] << " ";
		std::cout << std::endl;

	}	
		
}

