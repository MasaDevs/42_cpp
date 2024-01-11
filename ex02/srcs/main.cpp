#include <algorithm>
#include <cstddef>
#include <exception>
#include <iostream>
#include <vector>
#include <utility>
#include <list>

#define NOT_AVAILABLE -1

class MergeInsertionSort {
	public:
		MergeInsertionSort(std::vector<int> &V);
		void	sortVector();
		void	mergeSortVector(int left, int right);
		void	mergeVector(int left, int mid, int right);
		void	print();
	private:
		std::vector<std::pair<int, int>>	v_;
		int									surplus_element_ = NOT_AVAILABLE;
};

MergeInsertionSort::MergeInsertionSort(std::vector<int> &V) {
	for (size_t i = 0; i < V.size(); i+=2) {
		if (i + 1 == V.size())
			surplus_element_ = V[i];
		else
			v_.push_back(std::make_pair(std::max(V[i], V[i + 1]), std::min(V[i], V[i + 1])));
	}
}

void	MergeInsertionSort::mergeSortVector(int left, int right) {
	if (right - left < 3) {
		if (right - left == 2 && v_[left + 1].first < v_[left].first)
			std::swap(v_[left], v_[left + 1]);
		return ;
	}
	int mid = (left + right) / 2;
	mergeSortVector(left, mid);
	mergeSortVector(mid, right);
	mergeVector(left, mid, right);
			
}

void	MergeInsertionSort::mergeVector(int left, int mid, int right) {
	std::vector<std::pair<int, int>>	left_vector, right_vector;



}

void	MergeInsertionSort::sortVector() {
	mergeSortVector(0, v_.size());
}

void	MergeInsertionSort::print() {
	for (size_t i = 0; i < v_.size(); i++)
		std::cout << "pair: " << v_[i].first << " " << v_[i].second << std::endl;
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cerr << "Error: input value must be a series of number" << std::endl;
		return (1);
	}

	std::vector<int>	V;

	for (int i = 1; i < argc; i++) {
		V.push_back(std::atoi(argv[i]));
	}
	MergeInsertionSort	pmerge(V);
	pmerge.sortVector();
	pmerge.print();
}