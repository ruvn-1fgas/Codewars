#include <string>
#include <vector>

std::vector<std::string> split(std::string s)
{
  std::vector<std::string> res;
  std::string temp = "";
  for (char c : s)
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
      temp += c;
    else
    {
      if (!temp.empty())
        res.push_back(temp);
      temp = "";
    }
  if (!temp.empty())
    res.push_back(temp);
  return res;
}


int solve(const std::string& s)
{
  std::vector<std::string> a = split(s);
  int max = 0;
  for(auto s1 : a)
  {
    int sum = 0;
    for (auto c : s1)
      sum += c - 96;
    if (sum > max)
      max = sum;
  }
  return max;
}
