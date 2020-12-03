#include <iostream>
#include <algorithm>
#include <forward_list>
#include <functional>

//Fuctor인 compGreater를 구현. (힌트: 1. 두 정수 비교 결과를 bool 타입을 리턴. 2. operator()를 구현. 3. Functor는 클래스
struct compGreater
{
	bool operator()(int x, int y)
	{
		if (x > y)
		{
			return true;
		}
		return false;
	}
};

struct compLess
{
	bool operator()(int x, int y)
	{
		if (x < y)
		{
			return true;
		}
		return false;
	}
};
template <typename ForwardIterator, typename Compare>
void bubble_sort(ForwardIterator first, ForwardIterator last, Compare comp)
{
	for (auto sorted = first; first != last; last = sorted)
	{
		sorted = first;
		for (auto cur = first, prev = first; ++cur != last; ++prev)
		{
			if (comp(*cur, *prev))
			{
				std::iter_swap(cur, prev);
				sorted = cur;
			}
		}
	}
}

int main()
{
	std::forward_list<int> values{7, 0, 6, 1, 5, 2, 4, 3};

	std::cout << "오름차순 정렬" << std::endl;
	compLess compLess; //Functor 생성
	bubble_sort(values.begin(), values.end(), compLess);
	//결과 프린트
	for (auto it = values.begin(); it != values.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl;

	std::cout << "내림차순 정렬" << std::endl;
	compGreater compGreater; //Functor 생성
	bubble_sort(values.begin(), values.end(), compGreater);
	//결과 프린트
	for (auto it = values.begin(); it != values.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout << std::endl;

	getchar();
}
