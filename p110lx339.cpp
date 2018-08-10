#include <iostream>
#include <string>

using namespace std;

void compareString(string a, string b)
{
    if (a==b)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;     
    return;
}

void compareArr(const char *a, int aLen, const char *b, int bLen)
{
    cout << "Debug aLen : " << aLen << " bLen : " << bLen << endl;
    if (aLen != bLen)
    {
        cout << "not equal" << endl;
    }   
    else
    {
        for (int i = 0; i < aLen; ++i)
        {
            if (a[i] != b[i])
            {
                cout << "not equal" << endl;
                break;
            }
            if (i == aLen -1)
                cout << "equal" << endl;
        }
    }
    return;
}
int main()
{
    string a,b;
    cout << "string 1: " << endl;
    cin >> a;
    cout << "string 2: " << endl;
    cin >> b;

    compareString(a, b);
    compareArr(a.c_str(), a.size(), b.c_str(), b.size());
    return 0;
}

