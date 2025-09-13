#include "ans.h"

int ans(std::string input){
    int step = 0, raz = 1, binar = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '1')
        {
            step++;
            // binar += (1 * raz);
            raz *= 10;
        }
    }

    return pow(2, step) - 1;
}