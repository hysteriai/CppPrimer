#include <iostream>
using namespace std;

int main()
{
    cout << "input a num\n";
    int i = 0;
    cin >> i;
    if (0 == i%2)
        cout << i << " 是偶数\n";
    else
        cout << i << " 是奇数\n";    
    return 0;
}
