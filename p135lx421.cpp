#include "my_func.h"

int main()
{
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
#if 0
    for (decltype(vi.size()) i = 0; i < vi.size(); ++i)
    {
        if (0 != vi[i] % 2)
            vi[i] *= 2;
    }
#endif
    for (decltype(vi.size()) i = 0; i < vi.size(); ++i)
    {
        vi[i] *= (0 != vi[i] % 2) ? 2 : 1;
    }
    printVector(vi);
    return 0;
}
