#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<int> ivec;
  int i = 0;
  while (cin >> i)
    ivec.push_back(i);
  for (auto j : ivec) {
    cout << j << endl;
  }
  cout << ivec.size() << endl;
}