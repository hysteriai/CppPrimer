#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Please input you grade:\n";
    int grade = 0;
    cin >> grade;

    string finalgrade;
    finalgrade = (grade >= 90) ? "high pass"
                              : (grade >= 75) ? "pass"
                              : (grade >= 60) ? "low pass"
                              : "fail";
    cout << finalgrade << endl;
    
    if (grade >= 90)
        finalgrade = "high pass";
    else if (grade >= 75)
        finalgrade = "pass";
    else if (grade >= 60)
        finalgrade = "low pass";
    else
        finalgrade = "fail";

    cout << finalgrade << endl;
    return 0;
}
