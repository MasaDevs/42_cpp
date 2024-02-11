#include "PmergeMe.hpp"
#include <sys/time.h>
#include <iostream>
#include <sstream>
#include <algorithm>


int main(int argc, char *argv[]) {

	std::vector<int> before_vec, after_vec;
	std::list<int> before_lst, after_lst;
	struct timeval time_before_vec, time_before_lst, time_after_vec, time_after_lst;

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
	{
		gettimeofday(&time_before_vec, NULL);
		after_vec = PmergeMe::mergeInsertionSort(before_vec);
		gettimeofday(&time_after_vec, NULL);

		gettimeofday(&time_before_lst, NULL);
		after_lst= PmergeMe::mergeInsertionSort(before_lst);
		gettimeofday(&time_after_lst, NULL);
	}

	{
		std::cout << "Before:	";
		for (size_t i = 0; i < before_vec.size(); i++)
			std::cout << before_vec[i] << " ";
		std::cout << std::endl;
		std::cout << "After:	";
		for (size_t i = 0; i < after_vec.size(); i++)
			std::cout << after_vec[i] << " ";
		std::cout << std::endl;

		std::cout << "Time to process a range of " << before_vec.size() << "elements with std::vector : " << (time_after_vec.tv_usec - time_before_vec.tv_usec) << " us"<< std::endl;
		std::cout << "Time to process a range of " << before_vec.size() << "elements with std::list : " << (time_after_lst.tv_usec - time_before_lst.tv_usec)  << " us" << std::endl;
	}	
		
}

