#include <string>
#include <vector>
​
std::vector<std::string> uniq(const std::vector<std::string>& v) {
    std::vector<std::string> res;
    if (v.empty())
        return v;
    std::string last = v[0];
​
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == last)
            continue;
        else
        {
            res.push_back(last);
            last = v[i];
        }
    }
  res.push_back(last);
  return res;
}