#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<string> svec;
  string s;
  while (cin >> s && s != "end") {
    svec.push_back(s);
  }
  for (auto a : svec) {
    for (auto &b : a) {
      b = toupper(b);
    }
    cout << a << endl;
  }
}