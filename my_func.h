#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
template <class T>

void printArr(T * arr, int arrLen)
{
    for (int i = 0; i < arrLen; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <class T1>
void printVector(std::vector<T1> vt)
{
	typename std::vector<T1>::iterator it = vt.begin();
	for (; it != vt.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return;
}
