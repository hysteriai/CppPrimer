#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myVec;
    int i = 0;
    int sum = 0;
    while(cin>>i)
    {
        myVec.push_back(i);
    }
    vector<int>::iterator it;
    for(it = myVec.begin() + 1;it != myVec.end(); ++it)
    {
        sum = *it + *(it - 1);
        cout << sum << " ";
    }
    cout << endl;
    vector<int>::iterator itEnd;
    for(it = myVec.begin(),itEnd = myVec.end() - 1;it != itEnd; ++it, --itEnd)
    {
        sum = *it + *itEnd;
        cout << sum << " ";
    }
    return 0;
}
