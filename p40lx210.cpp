#include <iostream>
#include <string>
using namespace std;
string global_string;
int global_int;
int main()
{
    int local_int;
    string local_string;
    cout << global_string << endl;
    cout << global_int << endl;
    cout << local_string << endl;
    cout << local_int << endl;
    return 0;
}