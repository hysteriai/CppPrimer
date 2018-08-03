#include <iostream>
#include <vector>

using namespace std;
void func(vector<int> v1, vector<int> v2)
{
	if (v1.size() != v2.size())
	{
		cout << " not equal " << endl;
		return;
	}
	
	for (decltype(v1.size()) i = 0; i < v1.size(); ++i)
	{
		if (v1[i] != v2[i])
		{
		    cout << "not equal " << endl;
            break;
		}
		else if (i == v1.size()-1)
		{
			cout << "equal" << endl;
		}
	}
}

int main()
{
    int ia[10] = {1,2,3,4,5,6,7,8,9,10};
    int *pi = nullptr;

    pi = &ia[5];
    *pi = 0;
    cout << ia[5] << endl;

    int ia2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ia3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; ++i)
    {
        if (ia2[i] != ia3[i])
        {
            cout << "not equal " << endl;
            break;
        }
        else if (9 == i)
        {
            cout << "equal" << endl;
        }
    }

	vector<int> myVec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> myVec2 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	func(myVec, myVec2);
    return 0;
}
