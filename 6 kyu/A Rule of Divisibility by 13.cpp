#include <vector>
#include <cmath>
class Thirteen
{
public:
    static long long thirt(long long n)
    {
        std::string s = std::to_string(n);
        std::vector<int> divS(s.size());

        for (int i = 0; i < divS.size(); i++)
            divS[i] =  static_cast<int>(pow(10, i)) % 13;
        std::reverse(s.begin(), s.end());
        long long sum = 0;
        int last = 0;
        while (true)
        {
            for (int i = 0; i < s.size(); i++)
                sum += (s[i] - '0') * divS[i];
            if (last == sum)
                return sum;
            s = std::to_string(sum);
            std::reverse(s.begin(), s.end());
            last = sum;
            sum = 0;
        }
        return 0;
    }
};
