#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int y = 0;
    int input = 0;
    
    cout << "Input a number:" << endl;
    cin >> input;

    input ? ++x, ++y : --x, --y;//三目运算符优先级高于逗号运算符 表达式其实为（input ? ++x, ++y : --x）, --y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
/*
Input a number:
1
x = 1
y = 0

Input a number:
0
x = -1
y = -1
*/
