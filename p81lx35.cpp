#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    while (cin>>s1&&s1!="end")
    {
        s2+=s1+' ';
    }
    cout << s2<<endl;
    return 0;
}