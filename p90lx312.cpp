#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<vector<int>> ivec;
  vector<int> v2(10);
  for (auto i : v2)
    cout << i << endl;
  vector<string> vs{10};
  for (auto i : vs)
    cout << i << endl;
}