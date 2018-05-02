#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> v = {0,1,2,3,4,5,6,7,8,9};
  for (auto it = v.begin(); it != v.end(); ++it) {
    *it *= 2;
  }
  for (auto a : v)
    cout << a << endl;
}