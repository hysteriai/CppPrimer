/*
p1 += p2 - p1;

p1 = p1 + (p2 -p1);

p1移动P1和p2相差的距离，即p1指向和p2相同的位置
*/
#include <iostream>
using namespace std;
int main()
{
    int ia[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p1 = &ia[1];
    int *p2 = &ia[3];
    p1 += p2 - p1;
    cout << *p1 << endl;

    p1 = &ia[3];
    p2 = &ia[1];
    p1 += p2 - p1;
    cout << *p1 << endl;

    p1 = &ia[0];
    p2 = &ia[0];
    p1 += p2 - p1;
    cout << *p1 << endl;

    int ia2[0];
    p1 = &ia2[0];
    p2 = &ia2[0];
    p1 += p2 - p1;
    cout << *p1 << endl;

    return 0;
}
