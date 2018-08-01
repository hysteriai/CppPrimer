/*
和内置类型的变量一样，如果在函数内部定义某种内置类型的数组，
那么默认初始化会使数组有未定义的值 （P101） 
*/
#include <iostream>
#include <string>
#include <iterator>
using namespace std;
string sa[10];
int ia[10];
int main()
{
    string sa2[10];
    int ia2[10];
    //尝试用两种方法遍历
    for (int i = 0; i < 10; ++i)
    {
        cout << "sa[" << i << "] = " << sa[i] << endl;
        cout << "ia[" << i << "] = " << ia[i] << endl;
    } 
    string *sa2beg = begin(sa2);
    string *sa2end = end(sa2);
    int *ia2beg = begin(ia2);
    int *ia2end = end(ia2);

    for (int j = 0;sa2beg != sa2end; ++sa2beg, ++j)
        cout << "sa2[" << j << "] = " << *sa2beg << endl;

    for (int k = 0;ia2beg != ia2end; ++ia2beg, ++k)
        cout << "ia2[" << k << "] = " << *ia2beg << endl;

    return 0;
}
