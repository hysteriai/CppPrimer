#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1;
    for (decltype(s1.size()) i =0;i<s1.size();++i)
        if(!ispunct(s1[i]))
            s2+=s1[i];
    cout << s2 <<endl;    
}