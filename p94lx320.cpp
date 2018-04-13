#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<int> ivec;
  int i;
  while (cin >> i) {
    ivec.push_back(i);
  }
  //   for (decltype(ivec.size()) t = 0; t < ivec.size() - 1; ++t) {
  //     cout << ivec[t] + ivec[t + 1] << endl;
  //   }
  //   for (auto t = 0; t < ivec.size() - 1; ++t) {
  //     cout << ivec[t] + ivec[t + 1] << endl;
  //   }
  decltype(ivec.size()) size = ivec.size();
  for (decltype(ivec.size()) t = 0; t < size / 2; ++t) {
    cout << ivec[t] + ivec[size - 1 - t] << endl;
  }
  return 0;
}