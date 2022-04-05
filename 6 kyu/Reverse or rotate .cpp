#include <string>
#include <cmath>
class RevRot
{
public:
    static std::string revRot(const std::string& strng, unsigned int sz)
    {
        if (sz > strng.size() || strng == "" || sz <= 0)
            return "";

        int count = strng.size() / sz;

        std::string res = "";
        for (int i = 0; i < count; i++)
        {
            std::string s;
            for (int j = sz * i; j < (i + 1) * sz; j++)
                s += strng[j];
            int sum = 0;

            for (int j = 0; j < s.size(); j++)
                sum += pow(s[j] - '0', 3);
            if (sum % 2 == 0)
                std::reverse(s.begin(), s.end());
            else
            {
              s += s.front();
                s = s.substr(1, s.size());
            }
            res += s;
        }

        return res;
    }
};
