#include <iostream>

using namespace std;

int my_func()
{
    return 0;
}

struct MyStruct
{
    int a;
    int b;
};

int main()
{
    int x = 2;
    int y = 1;
    MyStruct mySt {0};
    MyStruct *p = &mySt;

    cout << sizeof x + y << endl;//sizeof优先级高于+
    cout << sizeof(x + y) << endl;

    cout << sizeof p->a << endl;//sizeof优先级低于成员选择符
    cout << sizeof(p->a) << endl;

    cout << (sizeof x < y) << endl;//sizeof优先级高于<
    cout << sizeof (x < y) << endl;

    cout << sizeof my_func() << endl;

    return 0;
}

/*
output：
5
4
4
4
0
1
4
*/