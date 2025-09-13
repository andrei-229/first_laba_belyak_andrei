#include "pow.h"

int pow(int target, int stepen)
{
    int ans = 1;
    for (int i = 0; i < stepen; i++)
        ans *= target;
    return ans;
}