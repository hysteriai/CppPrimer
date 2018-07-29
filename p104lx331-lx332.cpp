#include <iostream>
#include <vector>

using namespace std;

void printArr(const int * arr, int len);
void printVector(vector<int> ivec);

int main()
{
    int ia[10] = {};
    int ia2[10] = {};
    int tmp = 0;
    for (int i = 0; i < 10; ++i)
        ia[i] = i;
    
    for (int i = 0; i < 10; ++i)
        ia2[i] = ia[i];

    printArr(ia, 10);
    printArr(ia2, 10);

    vector<int> iv;
    vector<int> iv2;
    
    for (int i = 0; i < 10; ++i)
        iv.push_back(i);
    
    for (vector<int>::iterator it = iv.begin(); it != iv.end(); ++it)
        iv2.push_back(*it);    
    
    printVector(iv);
    printVector(iv2);
    
    return 0;
}

void printArr(const int * arr, int len)
{
    for (int i = 0; i < len; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return;    
}

void printVector(vector<int> ivec)
{
    vector<int>::iterator it = ivec.begin();
    
    for (;it != ivec.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return;    
}
