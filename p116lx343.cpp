#include <iostream>

using namespace std;

int main()
{
    int ia[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i : ia)
        cout << i << " ";
    cout << endl;

    for (int j = 0; j < 10; ++j)
        cout << ia[j] << " ";
    cout << endl;

    for (int k = 0; k < 10; ++k)
        cout << *(ia + k) << " ";
    cout << endl;

    return 0;
}