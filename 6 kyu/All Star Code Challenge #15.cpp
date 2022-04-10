#include <string>
#include <vector>
​
std::vector<std::string> rotate(const std::string& s) {
    std::vector<std::string> res;
    std::string str = s;
    for (int i = 0; i < s.size(); i++)
    {
        str = str.substr(1, str.size() - 1) + str.front();
        res.push_back(str);
    }
​
    return res;
}