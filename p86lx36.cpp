#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "123456789";
    for (auto &c : s)
        c = 'X';
    cout << s <<endl;    
}