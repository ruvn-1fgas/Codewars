#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <list>
#include <cmath>
#include <numeric>
#include <stack>
#include <bitset>
#include <cwchar>
#include <unordered_map>
class Johnann
{
    static std::vector<long long> gen(long long n, bool f)
    {
        std::vector<long long> joh(n, 0);
        std::vector<long long> an(n, 0);
        an[0] = 1;
        joh[0] = 0;
        for (long long i = 1; i < n; i++)
        {
            an[i] = i - joh[an[i - 1]];
            joh[i] = i - an[joh[i - 1]];
        }

        return f ? an : joh;
    }

public:
    static std::vector<long long> john(long long n)
    {
        return gen(n, false);
    }
    static std::vector<long long> ann(long long n)
    {
        
        return gen(n, true);

    }
    static long long sumJohn(long long n)
    {
        long long sum = 0;
        std::vector<long long> kata = gen(n, false);
        
        sum = std::accumulate(kata.begin(), kata.end(), sum);
        return sum;
    }
    static long long sumAnn(long long n)
    {
        long long sum = 0;
        std::vector<long long> kata = gen(n, true);

        sum = std::accumulate(kata.begin(), kata.end(), sum);
        return sum;
    }
};
