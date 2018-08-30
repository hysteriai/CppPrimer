#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> vstr(10, "a");
    vector<string>::iterator iter = vstr.begin();
    *iter++; //合法，取vector第二个值
    //(*iter)++;//不合法
    //*iter.empty();//不合法，(*iter).empty();合法
    iter->empty(); //合法
    //++*iter;//不合法
    iter++->empty(); //合法
}