#include "my_func.h"

int main()
{
    int ia[] = {1, 2, 3, 4, 5};
    vector<int> iv(begin(ia), end(ia));
    int ia2[5] = {0};
    
    for (vector<int>::size_type i = 0; i < iv.size(); ++i)
    	ia2[i] = iv[i];
    
    printArr(ia, 5);
    printVector(iv);
    printArr(ia2, 5);
    
	return 0;
}
