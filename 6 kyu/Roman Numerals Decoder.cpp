#include <iostream>
#include <string>
#include <map>

int solution(std::string rn)
{
    std::map<char, int> nums = { {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1} };
    int res = 0;
    int old = 0;
    for (auto a : rn)
    {
        int curr = nums[a];
        res += curr;
        if (curr > old)
            res -= 2 * old;
        old = curr;
    }
    return res;
}
