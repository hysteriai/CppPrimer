#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<unsigned int> gradeSeg (11, 0);
    unsigned int grade = 0;
    vector<unsigned int>::iterator it = gradeSeg.begin();

    while (cin >> grade)
    {
        if (grade <= 100)
            ++(*(it + grade/10));
    }

    for (;it != gradeSeg.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n" << endl;
    return 0;
}
