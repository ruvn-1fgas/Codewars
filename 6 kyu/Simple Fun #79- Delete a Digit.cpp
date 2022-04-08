#include <string>
int deleteDigit(int n)
{
    std::string s = std::to_string(n);
    int max = 0;
    for(int i = 0; i < s.size(); i++)
    {
        std::string temp = "";
        for (int j = 0; j < s.size(); j++)
            if (j != i)
                temp += s[j];
        if (stoi(temp) > max)
            max = stoi(temp);
    }
    return max;
}