#include <iostream>
#include <vector>
#include <list>

void	merge(std::vector<int>& v, int start, int end);
void	insert_sort(std::vector<int>& v, int start, int end);
void	insert_sort(std::list<int>& lst);

int main()
{
	int N;
	
	std::cin >> N;
	std::vector<int> V(N);
	std::list<int> lst;

	for (int i = 0; i < N; i++)
		lst.push_back(N - i);
	for(std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++)
		std::cout << *(iter) << " " << std::endl;
	//for (int i = 0; i < N; i++)
	//		V[i] = N - i;
	//merge(V, 0, N - 1);
	//for (int i = 0; i < N; i++)
	//	if (0 < i && V[i] < V[i - 1])
	//		std::cout << "NG" << std::endl;
	//
	//std::cout << std::endl;
	insert_sort(lst);
	for(std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++)
		std::cout << *(iter) << " " << std::endl;
}

void	insert_sort(std::vector<int>& v, int start, int end)
{
	if (start == end)
		return ;
	for (int i = start + 1; i <= end; i++)
	{
		int		j = i;
		while(start < j && v[j] < v[j - 1])
		{
			int temp = v[j - 1];
			v[j - 1] = v[j];
			v[j] = temp;
			j--;
		}
	}
}

void	merge(std::vector<int>& v, int start, int end)
{
	if (end - start < 2)	
		return (insert_sort(v, start, end));
	merge(v, start, (start + end) / 2);
	merge(v, (start + end) / 2 + 1, end);
	insert_sort(v, start, end);
}

void	insert_sort(std::list<int>& lst)
{
	if (lst.size() <= 1)
			return ;
	for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++)	
	{
		std::list<int>::iterator iter2 = iter;
		std::list<int>::iterator iter3 = iter;
		iter3--;	
		while(iter2 != lst.begin() && *(iter2) < *(iter3))
		{
			int temp = *(iter3);
			*(iter3) = *(iter2);
			*(iter2) = temp;
			iter2--;
			iter3--;
		}
	}	
}
