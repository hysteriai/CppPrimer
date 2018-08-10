#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int main()
{
    char ac1[10] = "hello";
    char ac2[10] = "world";
    char ac3[10] = {0};

    strcpy(ac3, ac1);
    strcat(ac3, ac2);

    cout << ac3 << endl;
    return 0;
}
