#include <iostream>

using namespace std;
int func()
{
    return 10;
}

int main()
{
    /* code */
    unsigned buf_size = 1024;
    int ia1[buf_size];
    int ia2[4 * 7 - 14];
    int ia3[func()];
    //char st[11] = "fundamental"; //illegal
    return 0;
}
