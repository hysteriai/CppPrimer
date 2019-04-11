#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;
    ++x, ++y;
    cout << x << " " << y << endl;

    x++, ++y;
    cout << x << " " << y << endl;

    return 0;
}
/*
output
1 1
2 2
*/