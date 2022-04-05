#include <string>
#include <cmath>
class Negabinary {
public:
    static std::string ToNegabinary(int num)
    {
        std::string res = "";
        bool f = num > 0 ? true : false;
        int rem;
        do
        {
            rem = num % -2;
            num = num / -2;
            if (rem < 0)
            {
                rem = rem + 2;
                num++;
            }
            if (rem == 1) res = "1" + res;
            if (rem == 0) res = "0" + res;
        } while (num != 0);

        return res;
    }
    static int ToInt(std::string s)
    {
        int sum = 0;
        std::reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '1')
              sum += pow(-2, i);
        return sum;
    }
};
