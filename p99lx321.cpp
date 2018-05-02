#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int i = 0;
    while(cin>>i)
        v.push_back(i);
    for (auto it = v.begin();it!=v.end();++it)
        cout <<(*it)<<endl;
    
}